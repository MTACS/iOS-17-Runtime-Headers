
@interface SBPBAppLayout : PBCodable <NSCopying> {
    int  _centerConfiguration;
    SBPBDisplayItem * _centerDisplayItem;
    int  _centerDisplayItemRole;
    SBPBDisplayItemLayoutAttributes * _centerLayoutAttributes;
    NSString * _continuousExposeIdentifier;
    NSMutableArray * _displayItemLayoutAttributes;
    NSMutableArray * _displayItemLayoutAttributesForNonPreferredDisplays;
    NSMutableArray * _displayItems;
    int  _environment;
    struct { 
        unsigned int centerDisplayItemRole : 1; 
        unsigned int secondaryDisplayItemRole : 1; 
    }  _has;
    bool  _hidden;
    int  _layoutConfiguration;
    long long  _preferredDisplayOrdinal;
    SBPBDisplayItem * _primaryDisplayItem;
    SBPBDisplayItemLayoutAttributes * _primaryLayoutAttributes;
    double  _relativeHeight;
    double  _relativeWidth;
    SBPBDisplayItem * _secondaryDisplayItem;
    int  _secondaryDisplayItemRole;
    SBPBDisplayItemLayoutAttributes * _secondaryLayoutAttributes;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
