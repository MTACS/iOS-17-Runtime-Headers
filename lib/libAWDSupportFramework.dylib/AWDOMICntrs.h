
@interface AWDOMICntrs : PBCodable <NSCopying> {
    struct { 
        unsigned int heOmitxDlmursdrec : 1; 
        unsigned int heOmitxDlmursdrecAck : 1; 
        unsigned int heOmitxDur : 1; 
        unsigned int heOmitxRetries : 1; 
        unsigned int heOmitxSched : 1; 
        unsigned int heOmitxSuccess : 1; 
        unsigned int heOmitxTxnsts : 1; 
        unsigned int heOmitxTxnstsAck : 1; 
        unsigned int heOmitxUlmucfg : 1; 
        unsigned int heOmitxUlmucfgAck : 1; 
    }  _has;
    unsigned int  _heOmitxDlmursdrec;
    unsigned int  _heOmitxDlmursdrecAck;
    unsigned int  _heOmitxDur;
    unsigned int  _heOmitxRetries;
    unsigned int  _heOmitxSched;
    unsigned int  _heOmitxSuccess;
    unsigned int  _heOmitxTxnsts;
    unsigned int  _heOmitxTxnstsAck;
    unsigned int  _heOmitxUlmucfg;
    unsigned int  _heOmitxUlmucfgAck;
}

@property (nonatomic) bool hasHeOmitxDlmursdrec;
@property (nonatomic) bool hasHeOmitxDlmursdrecAck;
@property (nonatomic) bool hasHeOmitxDur;
@property (nonatomic) bool hasHeOmitxRetries;
@property (nonatomic) bool hasHeOmitxSched;
@property (nonatomic) bool hasHeOmitxSuccess;
@property (nonatomic) bool hasHeOmitxTxnsts;
@property (nonatomic) bool hasHeOmitxTxnstsAck;
@property (nonatomic) bool hasHeOmitxUlmucfg;
@property (nonatomic) bool hasHeOmitxUlmucfgAck;
@property (nonatomic) unsigned int heOmitxDlmursdrec;
@property (nonatomic) unsigned int heOmitxDlmursdrecAck;
@property (nonatomic) unsigned int heOmitxDur;
@property (nonatomic) unsigned int heOmitxRetries;
@property (nonatomic) unsigned int heOmitxSched;
@property (nonatomic) unsigned int heOmitxSuccess;
@property (nonatomic) unsigned int heOmitxTxnsts;
@property (nonatomic) unsigned int heOmitxTxnstsAck;
@property (nonatomic) unsigned int heOmitxUlmucfg;
@property (nonatomic) unsigned int heOmitxUlmucfgAck;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeOmitxDlmursdrec;
- (bool)hasHeOmitxDlmursdrecAck;
- (bool)hasHeOmitxDur;
- (bool)hasHeOmitxRetries;
- (bool)hasHeOmitxSched;
- (bool)hasHeOmitxSuccess;
- (bool)hasHeOmitxTxnsts;
- (bool)hasHeOmitxTxnstsAck;
- (bool)hasHeOmitxUlmucfg;
- (bool)hasHeOmitxUlmucfgAck;
- (unsigned long long)hash;
- (unsigned int)heOmitxDlmursdrec;
- (unsigned int)heOmitxDlmursdrecAck;
- (unsigned int)heOmitxDur;
- (unsigned int)heOmitxRetries;
- (unsigned int)heOmitxSched;
- (unsigned int)heOmitxSuccess;
- (unsigned int)heOmitxTxnsts;
- (unsigned int)heOmitxTxnstsAck;
- (unsigned int)heOmitxUlmucfg;
- (unsigned int)heOmitxUlmucfgAck;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeOmitxDlmursdrec:(bool)arg1;
- (void)setHasHeOmitxDlmursdrecAck:(bool)arg1;
- (void)setHasHeOmitxDur:(bool)arg1;
- (void)setHasHeOmitxRetries:(bool)arg1;
- (void)setHasHeOmitxSched:(bool)arg1;
- (void)setHasHeOmitxSuccess:(bool)arg1;
- (void)setHasHeOmitxTxnsts:(bool)arg1;
- (void)setHasHeOmitxTxnstsAck:(bool)arg1;
- (void)setHasHeOmitxUlmucfg:(bool)arg1;
- (void)setHasHeOmitxUlmucfgAck:(bool)arg1;
- (void)setHeOmitxDlmursdrec:(unsigned int)arg1;
- (void)setHeOmitxDlmursdrecAck:(unsigned int)arg1;
- (void)setHeOmitxDur:(unsigned int)arg1;
- (void)setHeOmitxRetries:(unsigned int)arg1;
- (void)setHeOmitxSched:(unsigned int)arg1;
- (void)setHeOmitxSuccess:(unsigned int)arg1;
- (void)setHeOmitxTxnsts:(unsigned int)arg1;
- (void)setHeOmitxTxnstsAck:(unsigned int)arg1;
- (void)setHeOmitxUlmucfg:(unsigned int)arg1;
- (void)setHeOmitxUlmucfgAck:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
