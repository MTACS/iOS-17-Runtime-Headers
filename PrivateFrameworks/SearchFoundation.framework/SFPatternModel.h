
@interface SFPatternModel : NSObject <NSCopying, NSSecureCoding, SFPatternModel> {
    NSString * _pattern_bundle_id;
    NSString * _pattern_id;
    NSData * _pattern_parameters;
    NSString * _pattern_template_directory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pattern_bundle_id;
@property (nonatomic, copy) NSString *pattern_id;
@property (nonatomic, copy) NSData *pattern_parameters;
@property (nonatomic, copy) NSString *pattern_template_directory;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pattern_bundle_id;
- (id)pattern_id;
- (id)pattern_parameters;
- (id)pattern_template_directory;
- (void)setPattern_bundle_id:(id)arg1;
- (void)setPattern_id:(id)arg1;
- (void)setPattern_parameters:(id)arg1;
- (void)setPattern_template_directory:(id)arg1;

@end
