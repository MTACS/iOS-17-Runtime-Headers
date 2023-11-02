
@interface MCDeleteInput : MCKeyboardInput {
    bool  _deleteBySyllable;
    NSString * _deletedText;
    bool  _shouldDeleteAcceptCandidateInput;
}

@property (nonatomic, readonly) bool deleteBySyllable;
@property (nonatomic, readonly) NSString *deletedText;
@property (nonatomic, readonly) bool shouldDeleteAcceptCandidateInput;

- (void).cxx_destruct;
- (bool)canComposeNew:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteBySyllable;
- (id)deletedText;
- (id)init;
- (id)initWithDeletedText:(id)arg1 deleteBySyllable:(bool)arg2 shouldDeleteAcceptCandidateInput:(bool)arg3;
- (bool)shouldDeleteAcceptCandidateInput;

@end
