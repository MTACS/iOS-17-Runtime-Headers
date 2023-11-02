
@interface MSPGroupSessionStorage : PBCodable <NSCopying> {
    NSString * _fromID;
    NSString * _groupIdentifier;
    struct { 
        unsigned int lastUpdateTimestamp : 1; 
    }  _has;
    double  _lastUpdateTimestamp;
    NSMutableArray * _liveStrategyIdentifiers;
    NSMutableArray * _messageStrategyIdentifiers;
    NSMutableArray * _minimalStrategyIdentifiers;
    NSString * _originatorIdentifier;
    NSString * _receivingAccountIdentifier;
    NSString * _receivingHandle;
    GEOSharedNavState * _state;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *fromID;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, readonly) bool hasFromID;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic) bool hasLastUpdateTimestamp;
@property (nonatomic, readonly) bool hasOriginatorIdentifier;
@property (nonatomic, readonly) bool hasReceivingAccountIdentifier;
@property (nonatomic, readonly) bool hasReceivingHandle;
@property (nonatomic, readonly) bool hasState;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic, retain) NSMutableArray *liveStrategyIdentifiers;
@property (nonatomic, retain) NSMutableArray *messageStrategyIdentifiers;
@property (nonatomic, retain) NSMutableArray *minimalStrategyIdentifiers;
@property (nonatomic, retain) NSString *originatorIdentifier;
@property (nonatomic, retain) NSString *receivingAccountIdentifier;
@property (nonatomic, retain) NSString *receivingHandle;
@property (nonatomic, retain) GEOSharedNavState *state;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)groupStorageWithIdentifier:(id)arg1 originator:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
+ (Class)liveStrategyIdentifierType;
+ (Class)messageStrategyIdentifierType;
+ (Class)minimalStrategyIdentifierType;

- (void).cxx_destruct;
- (void)addLiveStrategyIdentifier:(id)arg1;
- (void)addMessageStrategyIdentifier:(id)arg1;
- (void)addMinimalStrategyIdentifier:(id)arg1;
- (void)clearLiveStrategyIdentifiers;
- (void)clearMessageStrategyIdentifiers;
- (void)clearMinimalStrategyIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fromID;
- (id)groupIdentifier;
- (bool)hasFromID;
- (bool)hasGroupIdentifier;
- (bool)hasLastUpdateTimestamp;
- (bool)hasOriginatorIdentifier;
- (bool)hasReceivingAccountIdentifier;
- (bool)hasReceivingHandle;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastUpdateTimestamp;
- (id)liveStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (id)liveStrategyIdentifiers;
- (unsigned long long)liveStrategyIdentifiersCount;
- (void)mergeFrom:(id)arg1;
- (id)messageStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (id)messageStrategyIdentifiers;
- (unsigned long long)messageStrategyIdentifiersCount;
- (id)minimalStrategyIdentifierAtIndex:(unsigned long long)arg1;
- (id)minimalStrategyIdentifiers;
- (unsigned long long)minimalStrategyIdentifiersCount;
- (id)originatorIdentifier;
- (bool)readFrom:(id)arg1;
- (id)receivingAccountIdentifier;
- (id)receivingHandle;
- (void)setFromID:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHasLastUpdateTimestamp:(bool)arg1;
- (void)setLastUpdateTimestamp:(double)arg1;
- (void)setLiveStrategyIdentifiers:(id)arg1;
- (void)setMessageStrategyIdentifiers:(id)arg1;
- (void)setMinimalStrategyIdentifiers:(id)arg1;
- (void)setOriginatorIdentifier:(id)arg1;
- (void)setReceivingAccountIdentifier:(id)arg1;
- (void)setReceivingHandle:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)unknownFields;
- (void)updateWithState:(id)arg1;
- (void)writeTo:(id)arg1;

@end
