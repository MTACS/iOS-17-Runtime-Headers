
@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {
    NSString * _proem;
}

@property (getter=isChild, nonatomic, readonly) bool child;
@property (getter=isClient, nonatomic, readonly) bool client;
@property (nonatomic, readonly, copy) NSString *endpointDescription;
@property (getter=isNonLaunching, nonatomic, readonly) bool nonLaunching;
@property (getter=isRoot, nonatomic, readonly) bool root;
@property (getter=isServer, nonatomic, readonly) bool server;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpointDescription;
- (id)init;
- (bool)isChild;
- (bool)isClient;
- (bool)isNonLaunching;
- (bool)isRoot;
- (bool)isServer;

@end
