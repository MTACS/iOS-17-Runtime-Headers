
@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating> {
    AFSharedConfidenceScore * _base;
    unsigned long long  _confidenceScore;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSharedUserId : 1; 
        unsigned int hasConfidenceScore : 1; 
    }  _mutationFlags;
    NSString * _sharedUserId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getConfidenceScore;
- (id)getSharedUserId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setConfidenceScore:(unsigned long long)arg1;
- (void)setSharedUserId:(id)arg1;

@end
