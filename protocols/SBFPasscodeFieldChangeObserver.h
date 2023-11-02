
@protocol SBFPasscodeFieldChangeObserver <NSObject>

@required

- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;

@end
