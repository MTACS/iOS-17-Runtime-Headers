
@interface AXSSMotionTrackingExpressionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * __facialExpressionToSensitivity;
}

@property (nonatomic, retain) NSMutableDictionary *_facialExpressionToSensitivity;
@property (nonatomic, readonly, copy) NSDictionary *plistDictionary;

+ (id)_defaultSensitivitiesForAllFacialExpressions;
+ (id)_facicalExpressionToSensitivityToValueMapping;
+ (bool)_jawOpenStartingWithValue:(float)arg1 mouthClose:(float)arg2 expressionConfiguration:(id)arg3;
+ (float)_minConfidenceExpressionStarted:(unsigned long long)arg1 usingExpressionConfiguration:(id)arg2;
+ (id)defaultExpressionConfiguration;
+ (id)processIncomingExpressions:(id)arg1 previousExpressions:(id)arg2 expressionConfiguration:(id)arg3 startExpressionsOutSet:(id*)arg4 endExpressionsOutSet:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_facialExpressionToSensitivity;
- (void)_safelySetSensitivity:(unsigned long long)arg1 forFacialExpression:(unsigned long long)arg2 inDictionary:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMotionTrackingExpressionConfiguration:(id)arg1;
- (id)plistDictionary;
- (unsigned long long)sensitivityForFacialExpression:(unsigned long long)arg1;
- (void)setSensitivity:(unsigned long long)arg1 forFacialExpression:(unsigned long long)arg2;
- (void)set_facialExpressionToSensitivity:(id)arg1;

@end
