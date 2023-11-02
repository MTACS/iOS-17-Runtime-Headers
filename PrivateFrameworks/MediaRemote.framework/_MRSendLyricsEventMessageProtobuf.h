
@interface _MRSendLyricsEventMessageProtobuf : PBCodable <NSCopying> {
    _MRLyricsEventProtobuf * _event;
}

@property (nonatomic, retain) _MRLyricsEventProtobuf *event;
@property (nonatomic, readonly) bool hasEvent;

- (void).cxx_destruct;
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
- (void)writeTo:(id)arg1;

@end
