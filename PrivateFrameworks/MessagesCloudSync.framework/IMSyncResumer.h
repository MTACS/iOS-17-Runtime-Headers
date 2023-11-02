
@interface IMSyncResumer : NSObject {
    MCSSyncResumer * _resumer;
}

@property (nonatomic, retain) MCSSyncResumer *resumer;

- (void).cxx_destruct;
- (void)attemptToResumeSyncIfAppropriate;
- (id)initWithDelegate:(id)arg1;
- (id)resumer;
- (void)setResumer:(id)arg1;
- (id)systemMonitorListener;

@end
