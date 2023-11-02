
@protocol KCJoiningAcceptCircleDelegate <NSObject>

@required

- (NSData *)circleGetInitialSyncViews:(unsigned int)arg1 error:(id*)arg2;
- (NSData *)circleJoinDataFor:(struct __OpaqueSOSPeerInfo { }*)arg1 error:(id*)arg2;

@end
