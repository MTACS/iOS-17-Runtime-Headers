
@interface SESTLKShare : NSObject {
    NSData * _shareData;
    NSData * _sourcePeerIdentifier;
    NSData * _targetPeerIdentifier;
    NSData * _tlkUUID;
    NSString * _view;
}

@property (readonly) NSData *shareData;
@property (readonly) NSData *sourcePeerIdentifier;
@property (readonly) NSData *targetPeerIdentifier;
@property (readonly) NSData *tlkUUID;
@property (readonly) NSString *view;

+ (id)withCKKSExternalShare:(id)arg1;
+ (id)withView:(id)arg1 tlkUUID:(id)arg2 sourcePeerIdentifier:(id)arg3 targetPeerIdentifier:(id)arg4 shareData:(id)arg5;

- (void).cxx_destruct;
- (id)asCKKSExternalShare;
- (id)shareData;
- (id)sourcePeerIdentifier;
- (id)targetPeerIdentifier;
- (id)tlkUUID;
- (id)view;

@end
