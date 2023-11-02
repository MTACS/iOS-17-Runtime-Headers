
@interface TIAlignedTyping : TIAlignedTokens {
    NSArray * _documentStates;
    NSArray * _inlineCompletions;
    NSArray * _inserted;
    TIContinuousPath * _path;
    NSArray * _predicted;
    NSArray * _touched;
}

@property (nonatomic, copy) NSArray *documentStates;
@property (nonatomic, copy) NSArray *inlineCompletions;
@property (nonatomic, copy) NSArray *inserted;
@property (nonatomic, retain) TIContinuousPath *path;
@property (nonatomic, copy) NSArray *predicted;
@property (nonatomic, copy) NSArray *touched;

- (void).cxx_destruct;
- (id)documentStates;
- (id)inlineCompletions;
- (id)inserted;
- (bool)isAutocompleteTriggerForPreviousEntry;
- (bool)isRevisedAutocompleteEntry;
- (id)path;
- (id)predicted;
- (void)setDocumentStates:(id)arg1;
- (void)setInlineCompletions:(id)arg1;
- (void)setInserted:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPredicted:(id)arg1;
- (void)setTouched:(id)arg1;
- (id)touched;

@end
