
@interface _UITextKitTextRange : UITextRange <NSCopying> {
    _UITextKitTextPosition * _end;
    _UITextKitTextPosition * _start;
    NSArray * _textKit2Ranges;
    NSTextRange * _unionTextRange;
}

@property (nonatomic, retain) _UITextKitTextPosition *end;
@property (nonatomic, retain) _UITextKitTextPosition *start;
@property (nonatomic, retain) NSArray *textKit2Ranges;
@property (nonatomic, readonly) NSTextRange *unionTextRange;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 affinity:(long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)rangeWithTextContentManager:(id)arg1 textRanges:(id)arg2 affinity:(long long)arg3;
+ (id)rangeWithTextContentManager:(id)arg1 textRanges:(id)arg2 startAffinity:(long long)arg3 endAffinity:(long long)arg4;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })asRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)end;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setTextKit2Ranges:(id)arg1;
- (id)start;
- (id)textKit2Ranges;
- (id)unionTextRange;

@end
