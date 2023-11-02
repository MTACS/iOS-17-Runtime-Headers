
@interface CRDocumentOutputRegionMetadata : NSObject <CRCodable> {
    unsigned long long  _numFilteredRegions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long numFilteredRegions;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numFilteredRegions;
- (void)setNumFilteredRegions:(unsigned long long)arg1;

@end
