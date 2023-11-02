
@interface TRIClientBMLTCatalogArtifact : NSObject <NSCopying, NSSecureCoding> {
    TRIClientBmltCatalog * _bmltCatalog;
    NSNumber * _population;
}

@property (nonatomic, readonly) TRIClientBmltCatalog *bmltCatalog;
@property (nonatomic, readonly) NSNumber *population;

+ (bool)_hasStructurallyValidBMLTs:(id)arg1 population:(id)arg2;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)arg1 error:(id*)arg2;
+ (id)artifactWithBmltCatalog:(id)arg1 population:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bmltCatalog;
- (id)copyWithReplacementBmltCatalog:(id)arg1;
- (id)copyWithReplacementPopulation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBmltCatalog:(id)arg1 population:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArtifact:(id)arg1;
- (id)population;

@end
