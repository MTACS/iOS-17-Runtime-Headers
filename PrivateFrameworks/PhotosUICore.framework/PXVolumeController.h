
@interface PXVolumeController : PXObservable <PXMutableVolumeController> {
    bool  _isInSilentMode;
}

@property (nonatomic, readonly) bool isInSilentMode;

- (void)decreaseVolume;
- (void)increaseVolume;
- (id)init;
- (id)initWithIsInSilentMode:(bool)arg1;
- (bool)isInSilentMode;
- (void)performChanges:(id /* block */)arg1;
- (void)setIsInSilentMode:(bool)arg1;

@end
