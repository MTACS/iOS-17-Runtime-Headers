
@interface WFPBRunShortcutErrorEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSString * _automationType;
    bool  _didRunRemotely;
    NSString * _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int didRunRemotely : 1; 
    }  _has;
    NSString * _key;
    NSString * _runSource;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *automationType;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, readonly) bool hasActionIdentifier;
@property (nonatomic, readonly) bool hasAutomationType;
@property (nonatomic) bool hasDidRunRemotely;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasRunSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *runSource;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)automationType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didRunRemotely;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasActionIdentifier;
- (bool)hasAutomationType;
- (bool)hasDidRunRemotely;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasKey;
- (bool)hasRunSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)runSource;
- (void)setActionIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasDidRunRemotely:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)writeTo:(id)arg1;

@end
