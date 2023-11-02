
@interface SGExtractionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _confidence;
    unsigned long long  _extractionType;
    NSNumber * _modelVersion;
}

@property (nonatomic, readonly) NSNumber *confidence;
@property (nonatomic, readonly) unsigned long long extractionType;
@property (nonatomic, readonly) NSNumber *modelVersion;

+ (id)extractionInfoWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;
- (id)modelVersion;

@end
