
@interface TRIRuleQualifiedFactorPackSetId : NSObject <NSCopying> {
    NSString<TRIFactorPackSetId> * _ident;
    int  _targetingRuleIndex;
}

@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *ident;
@property (nonatomic, readonly) int targetingRuleIndex;

+ (id)factorPackSetIdWithIdent:(id)arg1 targetingRuleIndex:(int)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementIdent:(id)arg1;
- (id)copyWithReplacementTargetingRuleIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)ident;
- (id)init;
- (id)initWithIdent:(id)arg1 targetingRuleIndex:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFactorPackSetId:(id)arg1;
- (int)targetingRuleIndex;

@end
