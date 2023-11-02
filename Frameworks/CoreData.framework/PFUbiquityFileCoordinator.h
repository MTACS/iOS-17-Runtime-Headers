
@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString * _localPeerID;
}

- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;
- (bool)shouldRetryForError:(id)arg1 ignoreFile:(bool*)arg2;

@end
