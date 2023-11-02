
@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable * _factors;
}

+ (id)factorization;
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;
+ (id)factorizationWithFactorsAndExponents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateFactorsWithHandler:(id /* block */)arg1;
- (long long)_exponentForFactor:(id)arg1;
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;
- (void)_multiplyByFactorization:(id)arg1;
- (void)_raiseToExponent:(long long)arg1;
- (id)anyFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateFactorsWithHandler:(id /* block */)arg1;
- (long long)exponentForFactor:(id)arg1;
- (unsigned long long)factorCount;
- (id)factorizationByDividing:(id)arg1;
- (id)factorizationByMultiplying:(id)arg1;
- (id)factorizationByRaisingToExponent:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reciprocal;
- (id)unitString;

@end
