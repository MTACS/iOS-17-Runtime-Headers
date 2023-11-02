
@interface _SASPresentationAggregateStateMutation : NSObject <SASPresentationAggregateStateMutating> {
    SASPresentationAggregateState * _baseModel;
    bool  _canAcceptNewActivations;
    bool  _didNewActivationAcceptanceChange;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasCanAcceptNewActivations : 1; 
        unsigned int hasDidNewActivationAcceptanceChange : 1; 
        unsigned int hasRequestState : 1; 
    }  _mutationFlags;
    long long  _requestState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setCanAcceptNewActivations:(bool)arg1;
- (void)setDidNewActivationAcceptanceChange:(bool)arg1;
- (void)setRequestState:(long long)arg1;

@end
