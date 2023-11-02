
@interface CHSIntentRecommendation : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    CHSIntentReference * _intentReference;
    NSString * _localizedDescription;
}

@property (nonatomic, readonly) bool _isPartial;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CHSIntentReference *intentReference;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isPartial;
- (id)_partialIfNecessary;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntentReference:(id)arg1 localizedDescription:(id)arg2;
- (id)intent;
- (id)intentReference;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;

@end
