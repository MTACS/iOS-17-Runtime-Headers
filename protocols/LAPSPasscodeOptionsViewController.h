
@protocol LAPSPasscodeOptionsViewController <NSObject>

@required

- (<LAPSPasscodeOptionsViewControllerDelegate> *)delegate;
- (id)initWithConfiguration:(LAPSPasscodeOptionsViewControllerConfiguration *)arg1;
- (void)setDelegate:(id <LAPSPasscodeOptionsViewControllerDelegate>)arg1;

@end
