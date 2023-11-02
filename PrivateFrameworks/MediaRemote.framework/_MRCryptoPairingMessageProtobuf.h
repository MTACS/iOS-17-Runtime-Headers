
@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int state : 1; 
        unsigned int status : 1; 
        unsigned int isRetrying : 1; 
        unsigned int isUsingSystemPairing : 1; 
    }  _has;
    bool  _isRetrying;
    bool  _isUsingSystemPairing;
    NSData * _pairingData;
    int  _state;
    int  _status;
}

@property (nonatomic) bool hasIsRetrying;
@property (nonatomic) bool hasIsUsingSystemPairing;
@property (nonatomic, readonly) bool hasPairingData;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool isRetrying;
@property (nonatomic) bool isUsingSystemPairing;
@property (nonatomic, retain) NSData *pairingData;
@property (nonatomic) int state;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsRetrying;
- (bool)hasIsUsingSystemPairing;
- (bool)hasPairingData;
- (bool)hasState;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRetrying;
- (bool)isUsingSystemPairing;
- (void)mergeFrom:(id)arg1;
- (id)pairingData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsRetrying:(bool)arg1;
- (void)setHasIsUsingSystemPairing:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIsRetrying:(bool)arg1;
- (void)setIsUsingSystemPairing:(bool)arg1;
- (void)setPairingData:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)state;
- (int)status;
- (void)writeTo:(id)arg1;

@end