
@protocol AVMediaSelectionMenuDelegate <NSObject>

@required

- (void)mediaSelectionMenuController:(AVMediaSelectionMenuController *)arg1 didSelectOption:(AVMediaSelectionOption *)arg2 atIndex:(unsigned long long)arg3;

@optional

- (NSString *)mediaSelectionMenuController:(AVMediaSelectionMenuController *)arg1 displayNameForMediaSelectionOption:(AVMediaSelectionOption *)arg2;

@end
