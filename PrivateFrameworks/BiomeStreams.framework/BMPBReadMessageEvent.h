
@interface BMPBReadMessageEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int markedUnread : 1; 
    }  _has;
    NSString * _idsHandle;
    bool  _markedUnread;
}

@property (nonatomic, readonly) bool hasIdsHandle;
@property (nonatomic) bool hasMarkedUnread;
@property (nonatomic, retain) NSString *idsHandle;
@property (nonatomic) bool markedUnread;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdsHandle;
- (bool)hasMarkedUnread;
- (unsigned long long)hash;
- (id)idsHandle;
- (bool)isEqual:(id)arg1;
- (bool)markedUnread;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMarkedUnread:(bool)arg1;
- (void)setIdsHandle:(id)arg1;
- (void)setMarkedUnread:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
