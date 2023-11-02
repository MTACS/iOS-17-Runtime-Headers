
@interface INJSONEncoder : NSObject <NSCopying> {
    INJSONEncoderConfiguration * _configuration;
}

@property (nonatomic, readonly) INJSONEncoderConfiguration *_storedConfiguration;
@property (nonatomic, readonly, copy) INJSONEncoderConfiguration *configuration;
@property (nonatomic, copy) NSString *languageCode;

- (void).cxx_destruct;
- (id)_encodeObject:(id)arg1 codableAttribute:(id)arg2;
- (id)_storedConfiguration;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeObject:(id)arg1;
- (id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2;
- (id)encodeObject:(id)arg1 withCodableDescription:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)languageCode;
- (void)setLanguageCode:(id)arg1;

@end
