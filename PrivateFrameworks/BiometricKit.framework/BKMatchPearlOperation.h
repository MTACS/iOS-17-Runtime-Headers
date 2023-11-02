
@interface BKMatchPearlOperation : BKMatchOperation {
    bool  _fullFaceOnly;
    bool  _longTimeout;
    bool  _preAugmentationCheck;
    BKIdentity * _preAugmentationCheckIdentity;
    bool  _shouldAutoRetry;
}

@property (nonatomic) <BKMatchPearlOperationDelegate> *delegate;
@property (nonatomic) bool fullFaceOnly;
@property (nonatomic) bool longTimeout;
@property (nonatomic) bool preAugmentationCheck;
@property (nonatomic, retain) BKIdentity *preAugmentationCheckIdentity;
@property (nonatomic) bool shouldAutoRetry;

- (void).cxx_destruct;
- (bool)enableAutoRetry:(bool)arg1 error:(id*)arg2;
- (bool)fullFaceOnly;
- (bool)longTimeout;
- (id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;
- (id)optionsDictionaryWithError:(id*)arg1;
- (bool)pauseFaceDetectTimer:(bool)arg1 error:(id*)arg2;
- (bool)preAugmentationCheck;
- (id)preAugmentationCheckIdentity;
- (void)setFullFaceOnly:(bool)arg1;
- (void)setLongTimeout:(bool)arg1;
- (void)setPreAugmentationCheck:(bool)arg1;
- (void)setPreAugmentationCheckIdentity:(id)arg1;
- (void)setShouldAutoRetry:(bool)arg1;
- (bool)shouldAutoRetry;
- (bool)startNewMatchAttemptWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;

@end
