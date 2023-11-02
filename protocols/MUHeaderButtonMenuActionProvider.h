
@protocol MUHeaderButtonMenuActionProvider <NSObject>

@required

- (UIMenu *)createHeaderButtonsMenuWithPresentationOptions:(MUPresentationOptions *)arg1;
- (UIMenu *)createHeaderButtonsMenuWithPromotedSystemActionTypes:(NSArray *)arg1 excludedSystemActionTypes:(NSArray *)arg2 presentationOptions:(MUPresentationOptions *)arg3;

@end
