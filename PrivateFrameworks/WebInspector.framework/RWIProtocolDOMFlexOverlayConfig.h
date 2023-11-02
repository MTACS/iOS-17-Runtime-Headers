
@interface RWIProtocolDOMFlexOverlayConfig : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolDOMRGBAColor *flexColor;
@property (nonatomic) bool showOrderNumbers;

- (id)flexColor;
- (id)initWithFlexColor:(id)arg1;
- (void)setFlexColor:(id)arg1;
- (void)setShowOrderNumbers:(bool)arg1;
- (bool)showOrderNumbers;

@end
