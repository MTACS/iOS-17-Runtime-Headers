
@interface SLDActiveCallViewRenderer : NSObject {
    bool  _RTL;
    UISSlotStyle * _slotStyle;
    SLDActiveCallViewSlotTag * _slotTag;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDActiveCallViewSlotTag *slotTag;

- (void).cxx_destruct;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isRTL;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (id)slotStyle;
- (id)slotTag;

@end
