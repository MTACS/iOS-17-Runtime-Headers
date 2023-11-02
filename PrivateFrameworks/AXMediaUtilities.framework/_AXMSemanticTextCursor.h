
@interface _AXMSemanticTextCursor : NSObject {
    unsigned long long  _currentIndex;
    unsigned long long  _length;
    AXMSemanticText * _semanticText;
    NSAttributedString * _text;
}

@property (nonatomic, readonly) NSDictionary *currentAttributes;
@property (nonatomic, readonly) bool isCustomPattern;
@property (nonatomic, readonly) bool isDataDetector;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) bool isInLexicon;
@property (nonatomic, readonly) bool isOtherWord;
@property (nonatomic, readonly) bool isProperNoun;
@property (nonatomic, readonly) bool isPunctuation;
@property (nonatomic, readonly) bool isSentenceTerminator;
@property (nonatomic, readonly) bool isWhitespace;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } remainingRange;

- (void).cxx_destruct;
- (void)advance;
- (id)currentAttributes;
- (id)initWithText:(id)arg1 semanticText:(id)arg2;
- (bool)isCustomPattern;
- (bool)isDataDetector;
- (bool)isFinished;
- (bool)isInLexicon;
- (bool)isOtherWord;
- (bool)isProperNoun;
- (bool)isPunctuation;
- (bool)isSentenceTerminator;
- (bool)isWhitespace;
- (void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;
- (bool)processAttribute:(id)arg1 getSubstring:(id*)arg2 advanceCursor:(bool)arg3 markAsSemanticError:(bool)arg4 error:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })remainingRange;

@end
