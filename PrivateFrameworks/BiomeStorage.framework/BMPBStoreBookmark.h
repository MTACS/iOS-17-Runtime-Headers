
@interface BMPBStoreBookmark : PBCodable <NSCopying> {
    struct { 
        unsigned int iterationStartTime : 1; 
        unsigned int offset : 1; 
    }  _has;
    double  _iterationStartTime;
    unsigned int  _offset;
    NSString * _segmentName;
    NSString * _streamId;
}

@property (nonatomic) bool hasIterationStartTime;
@property (nonatomic) bool hasOffset;
@property (nonatomic, readonly) bool hasSegmentName;
@property (nonatomic, readonly) bool hasStreamId;
@property (nonatomic) double iterationStartTime;
@property (nonatomic) unsigned int offset;
@property (nonatomic, retain) NSString *segmentName;
@property (nonatomic, retain) NSString *streamId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIterationStartTime;
- (bool)hasOffset;
- (bool)hasSegmentName;
- (bool)hasStreamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)iterationStartTime;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (bool)readFrom:(id)arg1;
- (id)segmentName;
- (void)setHasIterationStartTime:(bool)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setIterationStartTime:(double)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setSegmentName:(id)arg1;
- (void)setStreamId:(id)arg1;
- (id)streamId;
- (void)writeTo:(id)arg1;

@end
