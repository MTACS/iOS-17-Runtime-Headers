
@interface UIDictationConnectionFilterState : NSObject {
    id /* block */  _pendingDictationCommand;
    struct __CFString { } * _transform;
}

@property (nonatomic, copy) id /* block */ pendingDictationCommand;
@property (nonatomic) struct __CFString { }*transform;

- (void).cxx_destruct;
- (id /* block */)pendingDictationCommand;
- (void)setPendingDictationCommand:(id /* block */)arg1;
- (void)setTransform:(struct __CFString { }*)arg1;
- (struct __CFString { }*)transform;

@end
