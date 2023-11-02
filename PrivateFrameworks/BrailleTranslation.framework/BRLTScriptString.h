
@interface BRLTScriptString : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _focus;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selection;
    NSString * _string;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _suggestionRange;
    BRLTTextFormattingRanges * _textFormattingRanges;
    NSMutableArray * _tokenRanges;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } focus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selection;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } suggestionRange;
@property (nonatomic, retain) BRLTTextFormattingRanges *textFormattingRanges;
@property (nonatomic, retain) NSMutableArray *tokenRanges;

- (void).cxx_destruct;
- (void)_addSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_backwardEditingAtomForCursorLocation:(unsigned long long)arg1 isBreak:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_backwardEditingAtomForSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isBreak:(bool*)arg2;
- (void)addString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(unsigned long long)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })backwardEditingAtom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deleteMergeAtom;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })focus;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })forwardEditingAtom;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })forwardEditingAtomForCursorLocation:(unsigned long long)arg1;
- (id)init;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 token:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScriptString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selection;
- (void)setSuggestionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextFormattingRanges:(id)arg1;
- (void)setTokenRanges:(id)arg1;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })suggestionRange;
- (id)textFormattingRanges;
- (id)tokenRanges;

@end
