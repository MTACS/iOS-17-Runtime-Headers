
@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {
    GEOVLFCorrection * _correction;
    struct { 
        unsigned int has_poseConfidence : 1; 
        unsigned int read_inlierSuccessIndices : 1; 
        unsigned int read_correction : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _inlierSuccessIndices;
    double  _poseConfidence;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOVLFCorrection *correction;
@property (nonatomic, readonly) bool hasCorrection;
@property (nonatomic) bool hasPoseConfidence;
@property (nonatomic, readonly) unsigned int*inlierSuccessIndices;
@property (nonatomic, readonly) unsigned long long inlierSuccessIndicesCount;
@property (nonatomic) double poseConfidence;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addInlierSuccessIndices:(unsigned int)arg1;
- (void)clearInlierSuccessIndices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correction;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrection;
- (bool)hasPoseConfidence;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int*)inlierSuccessIndices;
- (unsigned int)inlierSuccessIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)inlierSuccessIndicesCount;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)poseConfidence;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrection:(id)arg1;
- (void)setHasPoseConfidence:(bool)arg1;
- (void)setInlierSuccessIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPoseConfidence:(double)arg1;
- (void)writeTo:(id)arg1;

@end
