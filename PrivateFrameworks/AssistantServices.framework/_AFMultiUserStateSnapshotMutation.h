
@interface _AFMultiUserStateSnapshotMutation : NSObject <AFMultiUserStateSnapshotMutating> {
    AFMultiUserStateSnapshot * _base;
    NSArray * _confidenceScores;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasVtSatScore : 1; 
        unsigned int hasConfidenceScores : 1; 
    }  _mutationFlags;
    NSNumber * _vtSatScore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfidenceScores;
- (id)getVtSatScore;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setConfidenceScores:(id)arg1;
- (void)setVtSatScore:(id)arg1;

@end
