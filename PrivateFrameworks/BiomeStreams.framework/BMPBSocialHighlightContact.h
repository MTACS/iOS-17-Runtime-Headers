
@interface BMPBSocialHighlightContact : PBCodable <NSCopying> {
    NSString * _handle;
    struct { 
        unsigned int isMe : 1; 
        unsigned int isSignificant : 1; 
    }  _has;
    bool  _isMe;
    bool  _isSignificant;
}

@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic) bool hasIsMe;
@property (nonatomic) bool hasIsSignificant;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isSignificant;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handle;
- (bool)hasHandle;
- (bool)hasIsMe;
- (bool)hasIsSignificant;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (bool)isSignificant;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasIsSignificant:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setIsSignificant:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
