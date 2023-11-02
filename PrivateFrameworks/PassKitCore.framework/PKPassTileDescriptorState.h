
@interface PKPassTileDescriptorState : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _enabled;
    bool  _inProgress;
    NSString * _stateIdentifier;
    PKPassTileState * _stateOverride;
    bool  _supported;
    long long  _type;
}

@property (getter=isEnabled, nonatomic, readonly) unsigned long long enabled;
@property (getter=isInProgress, nonatomic, readonly) bool inProgress;
@property (nonatomic, readonly, copy) NSString *stateIdentifier;
@property (nonatomic, readonly) PKPassTileState *stateOverride;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initForType:(long long)arg1;
- (unsigned long long)isEnabled;
- (bool)isEqualToUnresolvedState:(id)arg1;
- (bool)isInProgress;
- (bool)isSupported;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)stateIdentifier;
- (id)stateOverride;
- (long long)type;

@end
