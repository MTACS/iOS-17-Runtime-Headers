
@interface _MPCQueueControllerEnumerator2 : NSEnumerator {
    MPSectionedIdentifierListPosition * _endPosition;
    NSEnumerator * _enumerator;
    bool  _hasEmittedItemFromRepeatAllBase;
    bool  _isEnumeratingFromRepeatAllBase;
    long long  _mode;
    _MPCQueueControllerBehaviorMusic2 * _musicBehavior;
    long long  _nextEnumerator;
    unsigned long long  _options;
    id /* block */  _repeatBoundaryBlock;
    MPSectionedIdentifierListPosition * _startPosition;
}

@property (nonatomic, readonly) MPSectionedIdentifierListPosition *endPosition;
@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) _MPCQueueControllerBehaviorMusic2 *musicBehavior;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, copy) id /* block */ repeatBoundaryBlock;
@property (nonatomic, readonly) MPSectionedIdentifierListPosition *startPosition;

+ (id)enumeratorWithMusicBehavior:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 startPosition:(id)arg4 endPosition:(id)arg5;

- (void).cxx_destruct;
- (void)_buildEnumerator;
- (id)_init;
- (id)endPosition;
- (id)enumerator;
- (long long)mode;
- (id)musicBehavior;
- (id)nextObject;
- (unsigned long long)options;
- (id /* block */)repeatBoundaryBlock;
- (void)setRepeatBoundaryBlock:(id /* block */)arg1;
- (id)startPosition;

@end
