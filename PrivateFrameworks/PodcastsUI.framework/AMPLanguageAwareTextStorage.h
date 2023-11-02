
@interface AMPLanguageAwareTextStorage : NSObject <AMPWritingDirectionContentProtocol, NSTextStorageDelegate> {
    void languageAwareString;
    void originalTextStorageDelegate;
    void textStorage;
}

@property (nonatomic, retain) NSTextStorage *textStorage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextStorage:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (id)textStorage;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(bool)arg5;
- (id)writingDirectionsQuantities;

@end
