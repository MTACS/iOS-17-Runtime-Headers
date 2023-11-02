
@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {
    int  _actionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionType : 1; 
    }  _has;
    NSString * _text;
    double  _timestamp;
}

@property (nonatomic) int actionType;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasText;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)text;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
