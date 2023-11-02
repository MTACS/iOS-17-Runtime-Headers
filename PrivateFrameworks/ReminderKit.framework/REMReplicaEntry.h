
@interface REMReplicaEntry : NSObject {
    <REMReplicaManagerClient> * _client;
    REMClockElementList * _clockElementList;
    bool  _inUse;
    unsigned int  _replicaUUIDIndex;
}

@property (nonatomic) <REMReplicaManagerClient> *client;
@property (nonatomic, retain) REMClockElementList *clockElementList;
@property (nonatomic) bool inUse;
@property (nonatomic) unsigned int replicaUUIDIndex;

- (void).cxx_destruct;
- (id)client;
- (id)clockElementList;
- (id)description;
- (void)encodeIntoEntryArchive:(void*)arg1;
- (bool)hasEqualPersistedPropertiesAs:(id)arg1;
- (bool)inUse;
- (id)initWithEntryArchive:(const void*)arg1;
- (id)initWithReplicaUUIDIndex:(unsigned int)arg1 clockElementList:(id)arg2 inUse:(bool)arg3 forClient:(id)arg4;
- (id)persistenceDescription;
- (unsigned int)replicaUUIDIndex;
- (void)setClient:(id)arg1;
- (void)setClockElementList:(id)arg1;
- (void)setInUse:(bool)arg1;
- (void)setReplicaUUIDIndex:(unsigned int)arg1;

@end
