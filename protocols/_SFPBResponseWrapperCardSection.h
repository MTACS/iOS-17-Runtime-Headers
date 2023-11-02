
@protocol _SFPBResponseWrapperCardSection <NSObject>

@required

- (void)addPattern_models:(_SFPBPatternModel *)arg1;
- (_SFPBCATModel *)catModel;
- (void)clearPattern_models;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPatternModel *)pattern_model;
- (NSArray *)pattern_models;
- (_SFPBPatternModel *)pattern_modelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pattern_modelsCount;
- (void)setCatModel:(_SFPBCATModel *)arg1;
- (void)setPattern_model:(_SFPBPatternModel *)arg1;
- (void)setPattern_models:(NSArray *)arg1;
- (void)setVisualCATOutput:(NSData *)arg1;
- (NSData *)visualCATOutput;

@end
