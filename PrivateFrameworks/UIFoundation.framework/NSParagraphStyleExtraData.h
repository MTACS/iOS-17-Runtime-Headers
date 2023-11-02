
@interface NSParagraphStyleExtraData : NSObject {
    bool  _alignmentFollowsWritingDirection;
    NSString * _codeBlockIntentLanguageHint;
    long long  _compositionLanguage;
    bool  _fullyJustified;
    long long  _headerLevel;
    long long  _horizontalAlignment;
    double  _hyphenationFactor;
    unsigned long long  _lineBoundsOptions;
    unsigned long long  _lineBreakStrategy;
    double  _lineHeightMultiple;
    long long  _listIntentOrdinal;
    double  _paragraphSpacingBefore;
    NSArray * _presentationIntents;
    bool  _spansAllLines;
    NSArray * _textBlocks;
    NSArray * _textLists;
    double  _tighteningFactor;
    bool  _usesDefaultHyphenation;
}

- (void)dealloc;

@end
