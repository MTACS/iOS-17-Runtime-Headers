
@interface PDSProtoUserAuth : PBCodable <NSCopying> {
    PDSProtoGSTokenAuth * _gsAuthToken;
    struct { 
        unsigned int userauthOneof : 1; 
    }  _has;
    int  _userauthOneof;
}

@property (nonatomic, retain) PDSProtoGSTokenAuth *gsAuthToken;
@property (nonatomic, readonly) bool hasGsAuthToken;
@property (nonatomic) bool hasUserauthOneof;
@property (nonatomic) int userauthOneof;

- (void).cxx_destruct;
- (int)StringAsUserauthOneof:(id)arg1;
- (void)clearOneofValuesForUserauthOneof;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gsAuthToken;
- (bool)hasGsAuthToken;
- (bool)hasUserauthOneof;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGsAuthToken:(id)arg1;
- (void)setHasUserauthOneof:(bool)arg1;
- (void)setUserauthOneof:(int)arg1;
- (int)userauthOneof;
- (id)userauthOneofAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
