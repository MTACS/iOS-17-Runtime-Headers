
@interface OADRegularTextRun : OADTextRun {
    NSMutableString * mText;
}

- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToTextRun:(id)arg1;
- (id)text;

@end
