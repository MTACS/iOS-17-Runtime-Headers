
@interface C2SessionTLSCache : NSObject <C2SessionDelegate> {
    C2Session * _pinnedSession;
    C2Session * _unpinnedSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) C2Session *pinnedSession;
@property (readonly) Class superclass;
@property (nonatomic, retain) C2Session *unpinnedSession;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (id)_createSessionWithTLSPinning:(bool)arg1;
- (id)init;
- (id)pinnedSession;
- (id)sessionForOptions:(id)arg1;
- (void)setPinnedSession:(id)arg1;
- (void)setUnpinnedSession:(id)arg1;
- (id)underlyingDelegateQueue;
- (id)unpinnedSession;

@end
