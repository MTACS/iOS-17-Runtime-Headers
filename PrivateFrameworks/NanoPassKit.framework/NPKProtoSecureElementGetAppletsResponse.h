
@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activationStates;
    NSMutableArray * _appletsBytes;
    NSMutableArray * _cardAIDs;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _lifecycleStates;
    bool  _pending;
}

@property (nonatomic, readonly) unsigned int*activationStates;
@property (nonatomic, readonly) unsigned long long activationStatesCount;
@property (nonatomic, retain) NSMutableArray *appletsBytes;
@property (nonatomic, retain) NSMutableArray *cardAIDs;
@property (nonatomic) bool hasPending;
@property (nonatomic, readonly) unsigned int*lifecycleStates;
@property (nonatomic, readonly) unsigned long long lifecycleStatesCount;
@property (nonatomic) bool pending;

+ (Class)appletsBytesType;
+ (Class)cardAIDsType;

- (void).cxx_destruct;
- (unsigned int*)activationStates;
- (unsigned int)activationStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activationStatesCount;
- (void)addActivationStates:(unsigned int)arg1;
- (void)addAppletsBytes:(id)arg1;
- (void)addCardAIDs:(id)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (id)appletsBytes;
- (id)appletsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appletsBytesCount;
- (id)cardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearActivationStates;
- (void)clearAppletsBytes;
- (void)clearCardAIDs;
- (void)clearLifecycleStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int*)lifecycleStates;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)lifecycleStatesCount;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActivationStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAppletsBytes:(id)arg1;
- (void)setCardAIDs:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setLifecycleStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end