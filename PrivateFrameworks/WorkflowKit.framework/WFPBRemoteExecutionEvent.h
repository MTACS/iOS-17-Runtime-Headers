
@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    bool  _completed;
    NSString * _connectionType;
    NSString * _destinationType;
    struct { 
        unsigned int completed : 1; 
    }  _has;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSString *connectionType;
@property (nonatomic, retain) NSString *destinationType;
@property (nonatomic, readonly) bool hasActionIdentifier;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasConnectionType;
@property (nonatomic, readonly) bool hasDestinationType;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (bool)completed;
- (id)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationType;
- (id)dictionaryRepresentation;
- (bool)hasActionIdentifier;
- (bool)hasCompleted;
- (bool)hasConnectionType;
- (bool)hasDestinationType;
- (bool)hasKey;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDestinationType:(id)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
