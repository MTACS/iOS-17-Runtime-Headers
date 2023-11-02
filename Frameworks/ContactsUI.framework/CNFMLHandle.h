
@interface CNFMLHandle : NSObject {
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *identifier;

+ (id)handleWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)comparisonIdentifier;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
