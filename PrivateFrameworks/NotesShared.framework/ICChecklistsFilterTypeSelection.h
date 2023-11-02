
@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying> {
    unsigned long long  _selectionType;
}

@property (nonatomic, readonly) unsigned long long selectionType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterName;
- (long long)filterType;
- (unsigned long long)hash;
- (id)initWithSelectionType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICChecklistsFilterTypeSelection:(id)arg1;
- (id)rawFilterValue;
- (unsigned long long)selectionType;

@end
