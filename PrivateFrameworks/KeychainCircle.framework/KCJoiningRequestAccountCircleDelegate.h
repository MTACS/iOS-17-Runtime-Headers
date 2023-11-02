
@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegate;

- (struct __OpaqueSOSPeerInfo { }*)copyPeerInfoError:(id*)arg1;
- (bool)processCircleJoinData:(id)arg1 version:(int)arg2 error:(id*)arg3;

@end
