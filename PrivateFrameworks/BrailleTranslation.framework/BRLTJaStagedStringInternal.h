
@interface BRLTJaStagedStringInternal : BRLTJaEditableStringInternal {
    void stage;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSStage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isStageEmpty;
@property (nonatomic, readonly) NSString *stageSignalledString;
@property (nonatomic, readonly) NSString *stageString;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSStage;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)initWithString:(id)arg1 NSSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 NSFocus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 NSSuggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 tokenRangeDict:(id)arg5 stage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (bool)isEqual:(id)arg1;
- (bool)isStageEmpty;
- (id)stageSignalledString;
- (id)stageString;

@end
