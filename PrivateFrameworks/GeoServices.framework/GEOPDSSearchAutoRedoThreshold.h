
@interface GEOPDSSearchAutoRedoThreshold : PBCodable <NSCopying> {
    struct { 
        unsigned int has_panDeltaThresholdInMeters : 1; 
        unsigned int has_zoomInPercentThreshold : 1; 
        unsigned int has_zoomOutPercentThreshold : 1; 
        unsigned int has_numberOfVisiblePoisThreshold : 1; 
    }  _flags;
    unsigned int  _numberOfVisiblePoisThreshold;
    double  _panDeltaThresholdInMeters;
    PBUnknownFields * _unknownFields;
    double  _zoomInPercentThreshold;
    double  _zoomOutPercentThreshold;
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
