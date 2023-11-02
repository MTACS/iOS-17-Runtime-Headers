
@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _handled;
    NSString * _handledReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isHandled, nonatomic, readonly) bool handled;
@property (nonatomic, readonly, copy) NSString *handledReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleWithReason:(id)arg1;
- (id)handledReason;
- (bool)isHandled;
- (id)loggingCategory;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unhandledCopy;

@end
