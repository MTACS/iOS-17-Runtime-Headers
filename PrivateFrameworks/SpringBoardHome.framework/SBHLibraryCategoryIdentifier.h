
@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _hash;
    NSString * _localizedDisplayName;
    NSString * _localizedDisplayNameKey;
    unsigned long long  _predictionCategoryID;
    unsigned long long  _predictionCategoryIndex;
}

@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *localizedDisplayNameKey;
@property (nonatomic, readonly) unsigned long long predictionCategoryID;
@property (nonatomic, readonly) unsigned long long predictionCategoryIndex;

+ (id)categoryWithLocalizedDisplayName:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionCategoryID:(unsigned long long)arg1 categoryIndex:(unsigned long long)arg2 localizedDisplayName:(id)arg3 localizedDisplayNameKey:(id)arg4;
- (id)initWithPredictionCategoryID:(unsigned long long)arg1 localizedDisplayNameKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategoryIdentifier:(id)arg1;
- (id)localizedDisplayName;
- (id)localizedDisplayNameKey;
- (unsigned long long)predictionCategoryID;
- (unsigned long long)predictionCategoryIndex;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
