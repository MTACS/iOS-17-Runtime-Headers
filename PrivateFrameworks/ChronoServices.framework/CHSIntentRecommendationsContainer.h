
@interface CHSIntentRecommendationsContainer : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    bool  _didAdjustRecommendationCount;
    NSArray * _recommendations;
    NSData * _schemaData;
}

@property (nonatomic, readonly) bool _didAdjustRecommendationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recommendations;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_didAdjustRecommendationCount;
- (id)_initWithSchemaData:(id)arg1 recommendations:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchemaIntent:(id)arg1 recommendations:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)recommendations;

@end
