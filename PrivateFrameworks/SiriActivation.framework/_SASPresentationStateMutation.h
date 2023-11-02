
@interface _SASPresentationStateMutation : NSObject <SASPresentationStateMutating> {
    SASPresentationState * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasPresentationIdentifier : 1; 
    }  _mutationFlags;
    NSString * _presentationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setPresentationIdentifier:(id)arg1;

@end
