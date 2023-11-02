
@protocol _SFNavigationBarDelegate <_SFNavigationBarDelegateCommon>

@required

- (void)navigationBarCancelButtonWasTapped:(_SFNavigationBar *)arg1;
- (NSURL *)navigationBarURLForSharing:(_SFNavigationBar *)arg1;

@optional

- (NSUUID *)currentContentUUIDForNavigationBar:(_SFNavigationBar *)arg1;
- (long long)dataOwnerForNavigationBar:(_SFNavigationBar *)arg1;
- (NSItemProvider *)itemProviderForNavigationBar:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 didCreateLeadingToolbar:(UIToolbar *)arg2 trailingToolbar:(UIToolbar *)arg3;
- (void)navigationBar:(_SFNavigationBar *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)navigationBarDidLayoutSubviews:(_SFNavigationBar *)arg1;
- (void)navigationBarDoneButtonWasTapped:(_SFNavigationBar *)arg1;

@end
