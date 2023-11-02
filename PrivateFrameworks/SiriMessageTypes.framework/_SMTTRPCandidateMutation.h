
@interface _SMTTRPCandidateMutation : NSObject <SMTTRPCandidateMutating> {
    SMTTRPCandidate * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTrpCandidateId : 1; 
        unsigned int hasRequestId : 1; 
        unsigned int hasTcuList : 1; 
    }  _mutationFlags;
    NSString * _requestId;
    NSArray * _tcuList;
    NSString * _trpCandidateId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getRequestId;
- (id)getTcuList;
- (id)getTrpCandidateId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setRequestId:(id)arg1;
- (void)setTcuList:(id)arg1;
- (void)setTrpCandidateId:(id)arg1;

@end
