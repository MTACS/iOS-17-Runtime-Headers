
@interface _UICollectionLayoutListAttributes : NSObject <NSCopying> {
    long long  _appearanceStyle;
    unsigned long long  _backgroundMaskedCorners;
    struct { 
        unsigned int stylesFirstItemAsHeader : 1; 
        unsigned int hasBackgroundMaskedCorners : 1; 
    }  _flags;
    UIColor * _sectionBackgroundColor;
    _UICollectionLayoutListSectionData * _sectionData;
    UIColor * _separatorBackgroundColor;
    UIVisualEffect * _separatorVisualEffect;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
