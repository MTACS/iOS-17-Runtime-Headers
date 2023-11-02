
@interface _UISearchBarTextFieldTokenCounter : NSObject {
    NSTextStorage * _textStorage;
    id  _textStorageObservation;
    NSMutableIndexSet * _tokenCharacterIndexes;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRangeOfAllTokens;
@property (nonatomic, readonly) NSIndexSet *tokenCharacterIndexes;

- (void).cxx_destruct;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndexSet:(id)arg2;
- (void)_handleProcessEditing;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeOfAllTokens;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeOfTextAfterLastToken;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1;
- (id)initWithTextStorage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tokenAtCharacterIndex:(unsigned long long)arg1;
- (id)tokenCharacterIndexes;

@end
