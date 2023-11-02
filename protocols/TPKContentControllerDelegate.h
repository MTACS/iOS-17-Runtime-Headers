
@protocol TPKContentControllerDelegate <NSObject>

@required

- (void)contentController:(TPKContentController *)arg1 contentDidBecomeAvailable:(TPKContent *)arg2 animated:(bool)arg3;
- (void)contentController:(TPKContentController *)arg1 didFinishWithContent:(TPKContent *)arg2 animated:(bool)arg3;

@optional

- (void)contentController:(TPKContentController *)arg1 actionTapped:(TPKContent *)arg2;
- (NSDictionary *)contentController:(TPKContentController *)arg1 clientContextMapForKeys:(NSArray *)arg2;
- (UIImage *)contentController:(TPKContentController *)arg1 content:(TPKContent *)arg2 iconForCustomizationID:(long long)arg3;
- (UIImage *)contentController:(TPKContentController *)arg1 contentView:(TPKContentView *)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(TPKContentController *)arg1 contentViewNeedsLayout:(TPKContentView *)arg2;
- (void)contentController:(TPKContentController *)arg1 eventOccurred:(long long)arg2 content:(TPKContent *)arg3 context:(NSDictionary *)arg4;
- (NSString *)contentController:(TPKContentController *)arg1 personalizedStringForID:(long long)arg2 content:(TPKContent *)arg3;

@end
