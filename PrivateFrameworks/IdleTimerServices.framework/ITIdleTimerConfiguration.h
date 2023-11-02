
@interface ITIdleTimerConfiguration : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying> {
    bool  _disablesTimer;
    NSString * _identifier;
    id /* block */  _idleEventHandlerBlock;
    unsigned long long  _idleEventMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablesTimer;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly, copy) NSString *identifier;
@property (getter=_idleEventHandlerBlock, setter=_setIdleEventHandlerBlock:, nonatomic, copy) id /* block */ idleEventHandlerBlock;
@property (getter=_idleEventMask, setter=_setIdleEventMask:, nonatomic) unsigned long long idleEventMask;
@property (readonly) Class superclass;

+ (id)configurationToDisableIdleTimer;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithNewIdentifier;
- (id)_identifier;
- (id /* block */)_idleEventHandlerBlock;
- (unsigned long long)_idleEventMask;
- (void)_setIdleEventHandlerBlock:(id /* block */)arg1;
- (void)_setIdleEventMask:(unsigned long long)arg1;
- (id)_uniquedReason:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)disablesTimer;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setDisablesTimer:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
