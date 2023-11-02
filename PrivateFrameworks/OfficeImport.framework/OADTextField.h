
@interface OADTextField : OADTextRun {
    OADParagraphProperties * mParagraphProperties;
    NSString * mText;
}

- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)init;
- (bool)isEmpty;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;
- (void)setText:(id)arg1;
- (id)text;

@end
