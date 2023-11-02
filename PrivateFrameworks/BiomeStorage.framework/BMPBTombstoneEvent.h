
@interface BMPBTombstoneEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int length : 1; 
        unsigned int offset : 1; 
        unsigned int reason : 1; 
    }  _has;
    unsigned int  _length;
    unsigned int  _offset;
    NSString * _processName;
    int  _reason;
    NSString * _segmentName;
}

@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasOffset;
@property (nonatomic, readonly) bool hasProcessName;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasSegmentName;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *segmentName;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLength;
- (bool)hasOffset;
- (bool)hasProcessName;
- (bool)hasReason;
- (bool)hasSegmentName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)length;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (id)processName;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (id)segmentName;
- (void)setHasLength:(bool)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setProcessName:(id)arg1;
- (void)setReason:(int)arg1;
- (void)setSegmentName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
