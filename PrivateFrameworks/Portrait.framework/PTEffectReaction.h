
@interface PTEffectReaction : NSObject {
    unsigned long long  _effectType;
    unsigned long long  _orientation;
    void _position;
    long long  _triggerID;
    bool  _uiTriggeredReaction;
}

@property unsigned long long effectType;
@property unsigned long long orientation;
@property void position;
@property long long triggerID;
@property bool uiTriggeredReaction;

- (unsigned long long)effectType;
- (id)emoji;
- (unsigned long long)orientation;
- (void)position;
- (void)setEffectType:(unsigned long long)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setPosition;
- (void)setTriggerID:(long long)arg1;
- (void)setUiTriggeredReaction:(bool)arg1;
- (long long)triggerID;
- (bool)uiTriggeredReaction;

@end
