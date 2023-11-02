
@interface MCKeyboardInput : NSObject <NSCopying> {
    unsigned long long  _composingInputIndex;
    NSMutableArray * _mutableInputs;
    MCKeyboardState * _sourceKeyboardState;
}

@property (nonatomic, retain) MCKeyboardInput *composingInput;
@property (nonatomic) unsigned long long composingInputIndex;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSMutableArray *mutableInputs;
@property (nonatomic, readonly) MCKeyboardState *sourceKeyboardState;

- (void).cxx_destruct;
- (void)_addNearbyKeys:(id)arg1 to:(void*)arg2 likelihoodThreshold:(float)arg3;
- (id)_asInputStringWithCursorIndex:(unsigned long long*)arg1 remainingComposingInputIndex:(unsigned long long*)arg2 typeInputs:(id)arg3 forSearch:(bool)arg4 suffix:(id)arg5;
- (id)asCommittedText;
- (id)asInlineText;
- (unsigned long long)asInlineTextCursorIndex;
- (id)asMecabraGestures:(bool*)arg1;
- (id)asSearchString;
- (bool)canComposeNew:(id)arg1;
- (void)composeNew:(id)arg1;
- (id)composingInput;
- (unsigned long long)composingInputIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasDrawInput;
- (bool)hasKindOf:(Class)arg1;
- (bool)hasRemainingComposingInput;
- (id)init;
- (id)initWithSourceKeyboardState:(id)arg1;
- (id)inputs;
- (void)insertInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableInputs;
- (void)removeAllInputs;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)arg1;
- (void)replaceComposingInputWith:(id)arg1;
- (void)replaceInputAtIndex:(unsigned long long)arg1 with:(id)arg2;
- (void)setComposingInput:(id)arg1;
- (void)setComposingInputIndex:(unsigned long long)arg1;
- (id)shortDescription;
- (id)shortDescriptionWithLeadingString:(id)arg1;
- (id)sourceKeyboardState;

@end
