
@interface AWDSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying> {
    int  _autoFillInteractionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoFillInteractionType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int autoFillInteractionType;
@property (nonatomic) bool hasAutoFillInteractionType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAutoFillInteractionType:(id)arg1;
- (int)autoFillInteractionType;
- (id)autoFillInteractionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutoFillInteractionType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutoFillInteractionType:(int)arg1;
- (void)setHasAutoFillInteractionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
