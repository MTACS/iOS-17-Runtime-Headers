
@protocol CXVoicemailControllerVendorProtocol <NSObject>

@required

- (oneway void)addOrUpdateVoicemails:(NSArray *)arg1;
- (oneway void)removeVoicemails:(NSArray *)arg1;

@end
