
@interface __NSImmutableTextStorage : NSTextStorage {
    NSAttributedString * _contents;
    NSLayoutManager * _layoutManager;
    NSTextContainer * _textContainer;
}

@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSTextContainer *textContainer;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dealloc;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)layoutManager;
- (void)processEditing;
- (oneway void)release;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)string;
- (id)textContainer;

@end
