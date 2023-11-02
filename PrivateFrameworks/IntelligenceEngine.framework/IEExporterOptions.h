
@interface IEExporterOptions : NSObject {
    bool  _conditions;
    bool  _darkMode;
    int  _dotsPerInch;
    NSString * _highlightResponse;
    bool  _lightMode;
    bool  _transparent;
}

@property (nonatomic) bool conditions;
@property (nonatomic) bool darkMode;
@property (nonatomic) int dotsPerInch;
@property (nonatomic, retain) NSString *highlightResponse;
@property (nonatomic) bool lightMode;
@property (nonatomic) bool transparent;

- (void).cxx_destruct;
- (bool)conditions;
- (bool)darkMode;
- (int)dotsPerInch;
- (id)highlightResponse;
- (bool)lightMode;
- (void)setConditions:(bool)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDotsPerInch:(int)arg1;
- (void)setHighlightResponse:(id)arg1;
- (void)setLightMode:(bool)arg1;
- (void)setTransparent:(bool)arg1;
- (bool)transparent;

@end
