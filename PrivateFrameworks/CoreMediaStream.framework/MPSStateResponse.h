
@interface MPSStateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int retryAfterSeconds : 1; 
        unsigned int version : 1; 
        unsigned int icplAction : 1; 
        unsigned int mpsAction : 1; 
    }  _has;
    int  _icplAction;
    int  _mpsAction;
    long long  _retryAfterSeconds;
    long long  _version;
}

@property (nonatomic) bool hasIcplAction;
@property (nonatomic) bool hasMpsAction;
@property (nonatomic) bool hasRetryAfterSeconds;
@property (nonatomic) bool hasVersion;
@property (nonatomic) int icplAction;
@property (nonatomic) int mpsAction;
@property (nonatomic) long long retryAfterSeconds;
@property (nonatomic) long long version;

- (int)StringAsIcplAction:(id)arg1;
- (int)StringAsMpsAction:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcplAction;
- (bool)hasMpsAction;
- (bool)hasRetryAfterSeconds;
- (bool)hasVersion;
- (unsigned long long)hash;
- (int)icplAction;
- (id)icplActionAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mpsAction;
- (id)mpsActionAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (long long)retryAfterSeconds;
- (void)setHasIcplAction:(bool)arg1;
- (void)setHasMpsAction:(bool)arg1;
- (void)setHasRetryAfterSeconds:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIcplAction:(int)arg1;
- (void)setMpsAction:(int)arg1;
- (void)setRetryAfterSeconds:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
