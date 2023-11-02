
@interface _SMTContinuityEndMutation : NSObject <SMTContinuityEndMutating> {
    SMTContinuityEnd * _base;
    unsigned long long  _generatedHostTime;
    NSString * _lastTRPCandidateId;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasGeneratedHostTime : 1; 
        unsigned int hasLastTRPCandidateId : 1; 
        unsigned int hasRequestId : 1; 
    }  _mutationFlags;
    NSString * _requestId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getGeneratedHostTime;
- (id)getLastTRPCandidateId;
- (id)getRequestId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setGeneratedHostTime:(unsigned long long)arg1;
- (void)setLastTRPCandidateId:(id)arg1;
- (void)setRequestId:(id)arg1;

@end
