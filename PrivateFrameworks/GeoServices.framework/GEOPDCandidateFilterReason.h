
@interface GEOPDCandidateFilterReason : PBCodable <NSCopying> {
    struct { 
        unsigned int has_reasonType : 1; 
        unsigned int has_viewportExpansionFactor : 1; 
    }  _flags;
    int  _reasonType;
    GEOPDResultRefinementMetadata * _sortMetadata;
    PBUnknownFields * _unknownFields;
    float  _viewportExpansionFactor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
