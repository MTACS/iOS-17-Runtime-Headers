
@interface SYLogSessionState : PBCodable <NSCopying> {
    bool  _canRestart;
    bool  _canRollback;
    bool  _canceled;
    SYLogErrorInfo * _error;
    double  _fullSessionTimeout;
    struct { 
        unsigned int fullSessionTimeout : 1; 
        unsigned int perMessageTimeout : 1; 
        unsigned int canRestart : 1; 
        unsigned int canRollback : 1; 
        unsigned int canceled : 1; 
        unsigned int isReset : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isReset;
    bool  _isSending;
    unsigned long long  _maxConcurrentMessages;
    NSMutableArray * _peers;
    double  _perMessageTimeout;
    NSString * _reason;
    int  _state;
    NSMutableArray * _transportOptions;
}

@property (nonatomic) bool canRestart;
@property (nonatomic) bool canRollback;
@property (nonatomic) bool canceled;
@property (nonatomic, retain) NSDictionary *cocoaTransportOptions;
@property (nonatomic, retain) SYLogErrorInfo *error;
@property (nonatomic) double fullSessionTimeout;
@property (nonatomic) bool hasCanRestart;
@property (nonatomic) bool hasCanRollback;
@property (nonatomic) bool hasCanceled;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasFullSessionTimeout;
@property (nonatomic) bool hasIsReset;
@property (nonatomic) bool hasPerMessageTimeout;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isReset;
@property (nonatomic) bool isSending;
@property (nonatomic) unsigned long long maxConcurrentMessages;
@property (nonatomic, retain) NSMutableArray *peers;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) int state;
@property (nonatomic, retain) NSMutableArray *transportOptions;

+ (Class)peerType;
+ (Class)transportOptionsType;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (void)addPeer:(id)arg1;
- (void)addTransportOptions:(id)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (bool)canceled;
- (void)clearPeers;
- (void)clearTransportOptions;
- (id)cocoaTransportOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (double)fullSessionTimeout;
- (bool)hasCanRestart;
- (bool)hasCanRollback;
- (bool)hasCanceled;
- (bool)hasError;
- (bool)hasFullSessionTimeout;
- (bool)hasIsReset;
- (bool)hasPerMessageTimeout;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isReset;
- (bool)isSending;
- (unsigned long long)maxConcurrentMessages;
- (void)mergeFrom:(id)arg1;
- (id)peerAtIndex:(unsigned long long)arg1;
- (id)peers;
- (unsigned long long)peersCount;
- (double)perMessageTimeout;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCocoaTransportOptions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFullSessionTimeout:(double)arg1;
- (void)setHasCanRestart:(bool)arg1;
- (void)setHasCanRollback:(bool)arg1;
- (void)setHasCanceled:(bool)arg1;
- (void)setHasFullSessionTimeout:(bool)arg1;
- (void)setHasIsReset:(bool)arg1;
- (void)setHasPerMessageTimeout:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsReset:(bool)arg1;
- (void)setIsSending:(bool)arg1;
- (void)setMaxConcurrentMessages:(unsigned long long)arg1;
- (void)setPeers:(id)arg1;
- (void)setPerMessageTimeout:(double)arg1;
- (void)setReason:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTransportOptions:(id)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (id)transportOptions;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportOptionsCount;
- (void)writeTo:(id)arg1;

@end