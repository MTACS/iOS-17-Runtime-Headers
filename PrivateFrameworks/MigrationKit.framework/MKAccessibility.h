
@interface MKAccessibility : NSObject {
    bool  _enableDisplayInversion;
    float  _fontScale;
}

@property (nonatomic) bool enableDisplayInversion;
@property (nonatomic) float fontScale;

- (bool)enableDisplayInversion;
- (float)fontScale;
- (id)initWithData:(id)arg1;
- (void)setEnableDisplayInversion:(bool)arg1;
- (void)setFontScale:(float)arg1;

@end
