
@protocol SFContactAutoFillViewControllerFiller <NSObject>

@required

- (void)dismissCustomAutoFill;
- (void)performAutoFillWithMatchSelections:(NSArray *)arg1 doNotFill:(NSArray *)arg2 contact:(CNContact *)arg3;

@end
