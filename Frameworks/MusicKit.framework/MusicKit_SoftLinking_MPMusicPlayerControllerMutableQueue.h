
@interface MusicKit_SoftLinking_MPMusicPlayerControllerMutableQueue : NSObject {
    MPMusicPlayerControllerMutableQueue * _underlyingMutableQueue;
}

@property (nonatomic, readonly) MPMusicPlayerControllerMutableQueue *_underlyingMutableQueue;

- (void).cxx_destruct;
- (id)_initWithUnderlyingMutableQueue:(id)arg1;
- (id)_underlyingMutableQueue;
- (void)insertQueueDescriptor:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)removeItemWithIdentifier:(id)arg1;

@end
