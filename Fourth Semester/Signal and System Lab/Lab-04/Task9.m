S = input('Enter a Signal: ');
US = Upsample (S);
disp(US);
%figure
subplot(2,1,1)
stem(S, 'filled');
title('Original Signal')
xlabel('Sample Number')
ylabel('Signal Amplitude')
%figure2
subplot(2,1,2)
stem(US, 'filled');
title('UpSampled Signal')
xlabel('Sample Number')
ylabel('Signal Amplitude')