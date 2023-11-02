
@interface ObjectComparisonByTokens : NSObject {
    unsigned long long  _diffTokensCount;
    unsigned long long  _distance;
    id  _obj1;
    id  _obj2;
    id  _reference;
    unsigned long long  _sameTokensCount;
}

@property (nonatomic) unsigned long long diffTokensCount;
@property (nonatomic) unsigned long long distance;
@property (nonatomic, retain) id obj1;
@property (nonatomic, retain) id obj2;
@property (nonatomic, retain) id reference;
@property (nonatomic) unsigned long long sameTokensCount;

+ (bool)addComparison:(id)arg1 to:(id)arg2 ifMinOverlap:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)accountForadditionalLength;
- (id)description;
- (unsigned long long)diffTokensCount;
- (unsigned long long)distance;
- (void)incrementDistanceWith:(unsigned long long)arg1;
- (void)incrementTokensWith:(bool)arg1;
- (id)initWithObj1:(id)arg1 obj2:(id)arg2 reference:(id)arg3;
- (id)obj1;
- (id)obj2;
- (id)reference;
- (unsigned long long)sameTokensCount;
- (void)setDiffTokensCount:(unsigned long long)arg1;
- (void)setDistance:(unsigned long long)arg1;
- (void)setObj1:(id)arg1;
- (void)setObj2:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setSameTokensCount:(unsigned long long)arg1;

@end
