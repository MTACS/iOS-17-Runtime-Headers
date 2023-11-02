
@interface BMPBUserFocusActivityEvent : PBCodable <NSCopying> {
    NSString * _clientID;
    struct { 
        unsigned int isStart : 1; 
    }  _has;
    bool  _isStart;
    NSString * _mode;
}

@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, readonly) bool hasClientID;
@property (nonatomic) bool hasIsStart;
@property (nonatomic, readonly) bool hasMode;
@property (nonatomic) bool isStart;
@property (nonatomic, retain) NSString *mode;

- (void).cxx_destruct;
- (id)clientID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientID;
- (bool)hasIsStart;
- (bool)hasMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (void)mergeFrom:(id)arg1;
- (id)mode;
- (bool)readFrom:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setHasIsStart:(bool)arg1;
- (void)setIsStart:(bool)arg1;
- (void)setMode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
