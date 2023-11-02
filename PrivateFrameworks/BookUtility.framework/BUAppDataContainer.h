
@interface BUAppDataContainer : NSObject <BUContainerProtocol> {
    struct container_object_s { } * _container;
    struct container_query_s { } * _containerQuery;
}

@property (nonatomic, readonly) NSURL *url;

- (bool)_setupWithBundleID:(id)arg1;
- (void)close;
- (id)consumeSandboxToken;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;
- (id)url;

@end
