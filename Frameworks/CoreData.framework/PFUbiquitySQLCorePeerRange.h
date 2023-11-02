
@interface PFUbiquitySQLCorePeerRange : NSObject {
    NSString * _entityName;
    NSString * _owningPeerID;
    NSNumber * _peerEnd;
    NSNumber * _peerStart;
    NSNumber * _rangeEnd;
    NSNumber * _rangeStart;
}

- (void)dealloc;
- (id)description;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;

@end
