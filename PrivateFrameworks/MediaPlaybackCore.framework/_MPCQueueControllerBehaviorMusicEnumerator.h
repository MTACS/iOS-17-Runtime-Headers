
@interface _MPCQueueControllerBehaviorMusicEnumerator : NSEnumerator {
    _MPCQueueControllerEnumerator * _queueEnumerator;
    long long  _repeatIteration;
    MPCQueueControllerBehaviorMusicIdentifierComponents * _repeatOneComponents;
    MPCQueueControllerBehaviorMusicIdentifierComponents * _startingComponents;
}

@property (nonatomic, readonly) _MPCQueueControllerEnumerator *queueEnumerator;

- (void).cxx_destruct;
- (id)_loadingComponentsForHeadOfSection:(id)arg1;
- (id)initWithQueueEnumerator:(id)arg1 startingComponents:(id)arg2;
- (id)nextObject;
- (id)queueEnumerator;

@end
