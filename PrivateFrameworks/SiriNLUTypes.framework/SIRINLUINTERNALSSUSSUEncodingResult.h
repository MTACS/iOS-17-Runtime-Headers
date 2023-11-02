
@interface SIRINLUINTERNALSSUSSUEncodingResult : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _encodings;
    NSString * _requestId;
    NSString * _ssuEncoderVersion;
    NSString * _utterance;
}

@property (nonatomic, readonly) float*encodings;
@property (nonatomic, readonly) unsigned long long encodingsCount;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasSsuEncoderVersion;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) NSString *ssuEncoderVersion;
@property (nonatomic, retain) NSString *utterance;

- (void).cxx_destruct;
- (void)addEncoding:(float)arg1;
- (void)clearEncodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)encodingAtIndex:(unsigned long long)arg1;
- (float*)encodings;
- (unsigned long long)encodingsCount;
- (bool)hasRequestId;
- (bool)hasSsuEncoderVersion;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setEncodings:(float*)arg1 count:(unsigned long long)arg2;
- (void)setRequestId:(id)arg1;
- (void)setSsuEncoderVersion:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)ssuEncoderVersion;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
