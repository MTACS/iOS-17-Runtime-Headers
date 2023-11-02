
@protocol IAMContextProvider <NSObject>

@required

- (id)contextPropertyWithName:(NSString *)arg1;

@optional

- (void)messageCoordinator:(IAMMessageCoordinator *)arg1 didRequestAction:(NSDictionary *)arg2;
- (IAMPresentationPolicy *)presentationPolicyForPolicyGroup:(long long)arg1;

@end
