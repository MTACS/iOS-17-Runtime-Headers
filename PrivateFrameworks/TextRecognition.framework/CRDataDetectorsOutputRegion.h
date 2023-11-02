
@interface CRDataDetectorsOutputRegion : CROutputRegion {
    unsigned long long  _dataType;
    DDScannerResult * _ddResult;
}

@property (readonly) unsigned long long dataType;
@property (readonly) DDScannerResult *ddResult;

+ (id)outputRegionWithDDResult:(id)arg1 children:(id)arg2 locale:(id)arg3;
+ (id)outputRegionWithDataType:(unsigned long long)arg1 ddResult:(id)arg2 children:(id)arg3 locale:(id)arg4;

- (void).cxx_destruct;
- (bool)computesBoundsFromChildren;
- (bool)computesTranscriptFromChildren;
- (bool)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (unsigned long long)dataType;
- (id)ddResult;
- (id)debugDescription;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
