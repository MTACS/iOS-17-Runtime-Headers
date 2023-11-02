
@interface HMDHomeWalletKeyAccessoryConfigureState : HMFObject {
    bool  _readerKeyConfigureInProgress;
    bool  _readerKeyConfigured;
    bool  _shouldRetryReaderKeyConfigureOnFailure;
}

@property bool readerKeyConfigureInProgress;
@property bool readerKeyConfigured;
@property bool shouldRetryReaderKeyConfigureOnFailure;

- (bool)readerKeyConfigureInProgress;
- (bool)readerKeyConfigured;
- (void)setReaderKeyConfigureInProgress:(bool)arg1;
- (void)setReaderKeyConfigured:(bool)arg1;
- (void)setShouldRetryReaderKeyConfigureOnFailure:(bool)arg1;
- (bool)shouldRetryReaderKeyConfigureOnFailure;

@end
