
@interface _MRSendCommandResultHandlerDialogActionProtobuf : PBCodable <NSCopying> {
    _MRSendCommandMessageProtobuf * _event;
    NSString * _title;
    int  _type;
}

@property (nonatomic, retain) _MRSendCommandMessageProtobuf *event;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
