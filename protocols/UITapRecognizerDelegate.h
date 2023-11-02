
@protocol UITapRecognizerDelegate <NSObject>

@required

- (double)_touchSloppinessFactor;
- (bool)tapIsPossibleForTapRecognizer:(UITapRecognizer *)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(UITapRecognizer *)arg1;
- (void)tapRecognizerRecognizedTap:(UITapRecognizer *)arg1;

@optional

- (void)resetTapCountForTapRecognizer:(UITapRecognizer *)arg1;

@end
