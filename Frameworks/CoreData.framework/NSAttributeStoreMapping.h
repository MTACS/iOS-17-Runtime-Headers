
@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    unsigned int  _externalPrecision;
    int  _externalScale;
    int  _externalType;
}

- (id)attribute;
- (int)externalType;
- (id)initWithProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setExternalType:(int)arg1;
- (id)sqlType;

@end
