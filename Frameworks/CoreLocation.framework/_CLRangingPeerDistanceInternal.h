
@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying> {
    NSNumber * _accuracyMeters;
    NSDate * _date;
    NSNumber * _distanceMeters;
    bool  _initiator;
    _CLRangingPeer * _peer;
    bool  _shouldUnlock;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(bool)arg5 shouldUnlock:(bool)arg6;

@end
