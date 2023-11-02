
@interface SBSStereoLeaderInterface : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)isFollower:(id /* block */)arg1;
- (void)setDeviceAsStereoLeader:(bool)arg1 withOptions:(id)arg2;

@end
