
@interface SBHighlightSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    bool  _hoverEvent;
    long long  _layoutRole;
    bool  _pencilHoverEvent;
    unsigned long long  _phase;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (getter=isHoverEvent, nonatomic, readonly) bool hoverEvent;
@property (nonatomic, readonly) long long layoutRole;
@property (getter=isPencilHoverEvent, nonatomic, readonly) bool pencilHoverEvent;
@property (nonatomic, readonly) unsigned long long phase;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 phase:(unsigned long long)arg3 hover:(bool)arg4 pencilHover:(bool)arg5;
- (bool)isHoverEvent;
- (bool)isPencilHoverEvent;
- (long long)layoutRole;
- (unsigned long long)phase;
- (long long)type;

@end
