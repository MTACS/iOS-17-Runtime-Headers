
@interface GQDWPParagraph : GQDWPInlineList {
    bool  mContinue;
    bool  mIsHidden;
    long long  mListLevel;
    GQDSStyle * mParaStyle;
    bool  mRestartList;
}

- (bool)cont;
- (void)dealloc;
- (bool)isBlank;
- (bool)isHidden;
- (long long)listLevel;
- (id)paragraphStyle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (bool)restartList;

@end
