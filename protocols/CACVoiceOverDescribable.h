
@protocol CACVoiceOverDescribable

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (NSString *)fullLabel;
- (NSString *)numberedLabel;
- (NSString *)recognitionLabel;
- (unsigned long long)traits;
- (NSString *)unfilteredRecognitionLabel;
- (NSString *)valueLabel;

@end
