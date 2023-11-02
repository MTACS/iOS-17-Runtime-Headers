
@interface _MPCQueueControllerBehaviorMusicEnumerator2 : NSEnumerator {
    _MPCQueueControllerEnumerator2 * _queueEnumerator;
    long long  _repeatIteration;
    MPCQueueControllerBehaviorMusicIdentifierComponents * _repeatOneComponents;
    MPCQueueControllerBehaviorMusicIdentifierComponents * _startingComponents;
}

@property (nonatomic, readonly) _MPCQueueControllerEnumerator2 *queueEnumerator;

- (void).cxx_destruct;
- (id)_loadingComponentsForHeadOfSection:(id)arg1;
- (id)initWithQueueEnumerator:(id)arg1 startingComponents:(id)arg2;
- (id)nextObject;
- (id)queueEnumerator;

@end
