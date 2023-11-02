
@protocol _SFPBPatternModel <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)pattern_bundle_id;
- (NSString *)pattern_id;
- (NSData *)pattern_parameters;
- (NSString *)pattern_template_directory;
- (void)setPattern_bundle_id:(NSString *)arg1;
- (void)setPattern_id:(NSString *)arg1;
- (void)setPattern_parameters:(NSData *)arg1;
- (void)setPattern_template_directory:(NSString *)arg1;

@end
