
@interface _UIFocusLinearMovementSequence : NSObject {
    NSArray * _items;
    bool  _looping;
    bool  _restrictEnteringSequence;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (getter=isLooping, nonatomic, readonly) bool looping;
@property (getter=restrictsEnteringSequence, nonatomic, readonly) bool restrictEnteringSequence;

+ (id)sequenceWithItems:(id)arg1 loops:(bool)arg2;
+ (id)sequenceWithItems:(id)arg1 loops:(bool)arg2 restrictEnteringSequence:(bool)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItems:(id)arg1 loops:(bool)arg2;
- (id)initWithItems:(id)arg1 loops:(bool)arg2 restrictEnteringSequence:(bool)arg3;
- (bool)isLooping;
- (id)items;
- (bool)restrictsEnteringSequence;

@end
