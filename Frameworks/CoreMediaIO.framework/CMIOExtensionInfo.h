
@interface CMIOExtensionInfo : NSObject {
    NSString * _bundleID;
    NSDictionary * _bundleInfo;
    NSString * _description;
    NSObject<OS_xpc_object> * _endpoint;
    NSString * _redactedDescription;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSDictionary *bundleInfo;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;

+ (id)infoWithEndpoint:(id)arg1 bundleID:(id)arg2 bundleInfo:(id)arg3;

- (id)bundleID;
- (id)bundleInfo;
- (void)dealloc;
- (id)description;
- (id)endpoint;
- (id)initWithEndpoint:(id)arg1 bundleID:(id)arg2 bundleInfo:(id)arg3;
- (id)redactedDescription;

@end
