
@interface CKAtomBatchEnumerationOptions : NSObject {
    NSNumber * _atomType;
    NSData * _siteIdentifierModifier;
}

@property (nonatomic) NSNumber *atomType;
@property (nonatomic, copy) NSData *siteIdentifierModifier;

+ (id)optionsWithAtomType:(unsigned long long)arg1;
+ (id)optionsWithSiteIdentifierModifier:(id)arg1;

- (void).cxx_destruct;
- (id)atomType;
- (void)setAtomType:(id)arg1;
- (void)setSiteIdentifierModifier:(id)arg1;
- (id)siteIdentifierModifier;

@end
