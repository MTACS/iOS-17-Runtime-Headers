
@interface CLMapsXPCServiceManager : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)arg1 aroundCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 inRadius:(double)arg3 allowNetwork:(bool)arg4 WithReply:(id /* block */)arg5;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createConnection;
- (void)dealloc;
- (void)setConnection:(id)arg1;

@end
