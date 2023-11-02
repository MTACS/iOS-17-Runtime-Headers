
@interface BRLTJaStagedString : NSObject {
    BRLTJaStagedStringInternal * _underlyingObject;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSStage;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } NSSuggestion;
@property (nonatomic, readonly) NSString *stageSignalledString;
@property (nonatomic, readonly, copy) NSString *string;
@property (readonly) BRLTJaStagedStringInternal *underlyingObject;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSFocus;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSStage;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSSuggestion;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 suggestion:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 tokenRanges:(id)arg5 stage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)initWithUnderlyingObject:(id)arg1;
- (bool)isStageEmpty;
- (id)stageSignalledString;
- (id)stageString;
- (id)string;
- (id)underlyingObject;

@end
