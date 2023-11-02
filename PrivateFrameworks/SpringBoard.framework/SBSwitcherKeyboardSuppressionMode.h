
@interface SBSwitcherKeyboardSuppressionMode : NSObject <BSDescriptionProviding> {
    NSSet * _appLayouts;
    bool  _applyAssertionEvenIfAppIsHostingTheKeyboard;
    long long  _type;
}

@property (nonatomic, readonly) NSSet *appLayouts;
@property (nonatomic) bool applyAssertionEvenIfAppIsHostingTheKeyboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)arg1;
+ (id)suppressionModeForAllScenes;
+ (id)suppressionModeNone;

- (void).cxx_destruct;
- (id)_initWithAppLayouts:(id)arg1 suppressionType:(long long)arg2;
- (id)appLayouts;
- (bool)applyAssertionEvenIfAppIsHostingTheKeyboard;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setApplyAssertionEvenIfAppIsHostingTheKeyboard:(bool)arg1;
- (void)setType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesAllScenes;
- (bool)suppressesNoScenes;
- (bool)suppressesSwitcherScenesOnly;
- (long long)type;

@end
