
@interface CPLDropDerivativesRecipe : NSObject <NSSecureCoding> {
    unsigned long long  _changeType;
    NSArray * _derivativeTypes;
    unsigned long long  _sourceResourceType;
    NSString * _uti;
}

@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly) NSArray *derivativeTypes;
@property (nonatomic, readonly) NSDictionary *plistDescription;
@property (nonatomic, readonly) unsigned long long sourceResourceType;
@property (nonatomic, readonly) NSString *uti;

+ (id)archiveArrayOfCPLDropDerivativeRecipes:(id)arg1;
+ (unsigned long long)changeRecordTypeFromShortDescription:(id)arg1;
+ (id)shortDescriptionForResourceChangeRecordType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)unarchiveArrayOfCPLDropDerivativeRecipesFrom:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)derivativeTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceResourceType:(unsigned long long)arg1 uti:(id)arg2 changeType:(unsigned long long)arg3 droppingDerivativeTypes:(id)arg4;
- (id)plistDescription;
- (id)redactedDescription;
- (unsigned long long)sourceResourceType;
- (id)uti;

@end
