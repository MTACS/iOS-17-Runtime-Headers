
@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int userProvided : 1; 
    }  _has;
    NSString * _lyrics;
    _MRLyricsTokenProtobuf * _token;
    bool  _userProvided;
}

@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) bool hasUserProvided;
@property (nonatomic, retain) NSString *lyrics;
@property (nonatomic, retain) _MRLyricsTokenProtobuf *token;
@property (nonatomic) bool userProvided;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLyrics;
- (bool)hasToken;
- (bool)hasUserProvided;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lyrics;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUserProvided:(bool)arg1;
- (void)setLyrics:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUserProvided:(bool)arg1;
- (id)token;
- (bool)userProvided;
- (void)writeTo:(id)arg1;

@end
