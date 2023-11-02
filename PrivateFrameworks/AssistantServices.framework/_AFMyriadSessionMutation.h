
@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating> {
    AFMyriadSession * _base;
    NSData * _currentElectionAdvertisementData;
    NSUUID * _currentElectionAdvertisementId;
    NSDictionary * _electionAdvertisementDataByIds;
    unsigned long long  _generation;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasGeneration : 1; 
        unsigned int hasSessionId : 1; 
        unsigned int hasCurrentElectionAdvertisementId : 1; 
        unsigned int hasCurrentElectionAdvertisementData : 1; 
        unsigned int hasElectionAdvertisementDataByIds : 1; 
    }  _mutationFlags;
    NSUUID * _sessionId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getCurrentElectionAdvertisementData;
- (id)getCurrentElectionAdvertisementId;
- (id)getElectionAdvertisementDataByIds;
- (unsigned long long)getGeneration;
- (id)getSessionId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setCurrentElectionAdvertisementData:(id)arg1;
- (void)setCurrentElectionAdvertisementId:(id)arg1;
- (void)setElectionAdvertisementDataByIds:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setSessionId:(id)arg1;

@end
