
@interface MXRecognitionToken : PBCodable <NSCopying> {
    bool  _addSpaceAfter;
    int  _confidence;
    int  _endMilliSeconds;
    struct { 
        unsigned int confidence : 1; 
        unsigned int endMilliSeconds : 1; 
        unsigned int silenceStartMilliSeconds : 1; 
        unsigned int startMilliSeconds : 1; 
        unsigned int addSpaceAfter : 1; 
    }  _has;
    NSString * _ipaPhoneSeq;
    NSString * _phoneSeq;
    int  _silenceStartMilliSeconds;
    int  _startMilliSeconds;
    NSString * _tokenText;
}

@property (nonatomic) bool addSpaceAfter;
@property (nonatomic) int confidence;
@property (nonatomic) int endMilliSeconds;
@property (nonatomic) bool hasAddSpaceAfter;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasEndMilliSeconds;
@property (nonatomic, readonly) bool hasIpaPhoneSeq;
@property (nonatomic, readonly) bool hasPhoneSeq;
@property (nonatomic) bool hasSilenceStartMilliSeconds;
@property (nonatomic) bool hasStartMilliSeconds;
@property (nonatomic, readonly) bool hasTokenText;
@property (nonatomic, retain) NSString *ipaPhoneSeq;
@property (nonatomic, retain) NSString *phoneSeq;
@property (nonatomic) int silenceStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic, retain) NSString *tokenText;

- (void).cxx_destruct;
- (bool)addSpaceAfter;
- (int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endMilliSeconds;
- (bool)hasAddSpaceAfter;
- (bool)hasConfidence;
- (bool)hasEndMilliSeconds;
- (bool)hasIpaPhoneSeq;
- (bool)hasPhoneSeq;
- (bool)hasSilenceStartMilliSeconds;
- (bool)hasStartMilliSeconds;
- (bool)hasTokenText;
- (unsigned long long)hash;
- (id)ipaPhoneSeq;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneSeq;
- (bool)readFrom:(id)arg1;
- (void)setAddSpaceAfter:(bool)arg1;
- (void)setConfidence:(int)arg1;
- (void)setEndMilliSeconds:(int)arg1;
- (void)setHasAddSpaceAfter:(bool)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasEndMilliSeconds:(bool)arg1;
- (void)setHasSilenceStartMilliSeconds:(bool)arg1;
- (void)setHasStartMilliSeconds:(bool)arg1;
- (void)setIpaPhoneSeq:(id)arg1;
- (void)setPhoneSeq:(id)arg1;
- (void)setSilenceStartMilliSeconds:(int)arg1;
- (void)setStartMilliSeconds:(int)arg1;
- (void)setTokenText:(id)arg1;
- (int)silenceStartMilliSeconds;
- (int)startMilliSeconds;
- (id)tokenText;
- (void)writeTo:(id)arg1;

@end
