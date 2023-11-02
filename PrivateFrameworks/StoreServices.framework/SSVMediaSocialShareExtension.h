
@interface SSVMediaSocialShareExtension : NSObject {
    SSXPCConnection * _connection;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;

- (void).cxx_destruct;
- (id)extensionIdentifier;
- (void)getVisibilityWithCompletionBlock:(id /* block */)arg1;
- (id)init;

@end
