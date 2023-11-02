
@interface TDThemeConstant : NSManagedObject {
    int  _identifier;
}

- (id)constantName;
- (id)copyDataFromAttributes;
- (id)debugDescription;
- (id)displayName;
- (unsigned int)identifier;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setConstantName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;

@end
