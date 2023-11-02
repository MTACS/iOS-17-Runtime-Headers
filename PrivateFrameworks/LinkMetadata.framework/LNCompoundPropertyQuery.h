
@interface LNCompoundPropertyQuery : LNPropertyQuery {
    NSArray * _comparisons;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *comparisons;
@property (nonatomic, readonly) unsigned long long type;

+ (id)andComparisons:(id)arg1;
+ (id)orComparisons:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comparisons;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 comparisons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
