
@interface INJSONEncoderConfiguration : NSObject <NSCopying> {
    NSString * _languageCode;
    bool  _locationIncludesTimestamp;
}

@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) bool locationIncludesTimestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)languageCode;
- (bool)locationIncludesTimestamp;
- (void)setLanguageCode:(id)arg1;
- (void)setLocationIncludesTimestamp:(bool)arg1;

@end
