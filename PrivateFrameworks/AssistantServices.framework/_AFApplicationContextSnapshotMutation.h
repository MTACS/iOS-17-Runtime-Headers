
@interface _AFApplicationContextSnapshotMutation : NSObject <AFApplicationContextSnapshotMutating> {
    NSArray * _applicationContexts;
    AFApplicationContextSnapshot * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasApplicationContexts : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getApplicationContexts;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setApplicationContexts:(id)arg1;

@end
