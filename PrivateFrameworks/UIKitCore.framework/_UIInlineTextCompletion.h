
@interface _UIInlineTextCompletion : NSObject {
    TIKeyboardCandidate * _completion;
    TIKeyboardCandidate * _source;
}

@property (nonatomic, readonly) NSString *candidate;
@property (nonatomic, readonly, copy) TIKeyboardCandidate *completion;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly, copy) TIKeyboardCandidate *source;

+ (id)inlineTextCompletion:(id)arg1 source:(id)arg2;

- (void).cxx_destruct;
- (id)candidate;
- (id)completion;
- (id)initWithCompletion:(id)arg1 source:(id)arg2;
- (id)input;
- (id)source;

@end
