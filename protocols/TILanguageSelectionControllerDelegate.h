
@protocol TILanguageSelectionControllerDelegate <NSObject>

@required

- (void)didUpdateInputModeProbabilities:(TILanguageSelectionController *)arg1;
- (void)didUpdateInputModes:(TILanguageSelectionController *)arg1;
- (TIInputMode *)primaryInputMode;

@end
