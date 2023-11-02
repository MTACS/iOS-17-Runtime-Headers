
@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _redactedResources;
    NSNumber * _rulesVersion;
}

@property (nonatomic, readonly, copy) NSArray *redactedResources;
@property (nonatomic, readonly, copy) NSNumber *rulesVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRedactedResources:(id)arg1 rulesVersion:(id)arg2;
- (id)redactedResources;
- (id)rulesVersion;

@end
