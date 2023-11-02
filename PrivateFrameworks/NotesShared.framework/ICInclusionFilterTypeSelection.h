
@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long  _inclusionType;
}

@property (nonatomic, readonly) unsigned long long inclusionType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (long long)filterType;
- (unsigned long long)hash;
- (unsigned long long)inclusionType;
- (id)initWithInclusionType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInclusionFilterSelection:(id)arg1;
- (id)rawFilterValue;

@end
