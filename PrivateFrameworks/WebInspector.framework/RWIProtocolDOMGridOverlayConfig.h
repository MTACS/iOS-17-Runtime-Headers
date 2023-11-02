
@interface RWIProtocolDOMGridOverlayConfig : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolDOMRGBAColor *gridColor;
@property (nonatomic) bool showAreaNames;
@property (nonatomic) bool showExtendedGridLines;
@property (nonatomic) bool showLineNames;
@property (nonatomic) bool showLineNumbers;
@property (nonatomic) bool showTrackSizes;

- (id)gridColor;
- (id)initWithGridColor:(id)arg1;
- (void)setGridColor:(id)arg1;
- (void)setShowAreaNames:(bool)arg1;
- (void)setShowExtendedGridLines:(bool)arg1;
- (void)setShowLineNames:(bool)arg1;
- (void)setShowLineNumbers:(bool)arg1;
- (void)setShowTrackSizes:(bool)arg1;
- (bool)showAreaNames;
- (bool)showExtendedGridLines;
- (bool)showLineNames;
- (bool)showLineNumbers;
- (bool)showTrackSizes;

@end
