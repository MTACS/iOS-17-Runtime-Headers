
@interface VCCaptionsSegmentBlob : PBCodable <NSCopying> {
    unsigned int  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int hasSpaceAfter : 1; 
    }  _has;
    bool  _hasSpaceAfter;
    NSString * _text;
}

@property (nonatomic) unsigned int confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasHasSpaceAfter;
@property (nonatomic) bool hasSpaceAfter;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) NSString *text;

- (unsigned int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasHasSpaceAfter;
- (bool)hasSpaceAfter;
- (bool)hasText;
- (unsigned long long)hash;
- (id)initWithSFTranscriptionSegment:(id)arg1 isLast:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(unsigned int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasHasSpaceAfter:(bool)arg1;
- (void)setHasSpaceAfter:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
