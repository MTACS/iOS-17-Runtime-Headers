
@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _language;
    NSDictionary * _options;
    unsigned long long  _revision;
    long long  _type;
}

@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;
@property (readonly) long long type;

+ (unsigned long long)currentRevisionForType:(long long)arg1;
+ (id)defaultModelConfigurationForType:(long long)arg1;
+ (id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)supportedRevisionsForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)embeddingData;
- (id)embeddingModel;
- (id)embeddingURL;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)options;
- (unsigned long long)revision;
- (long long)type;

@end
