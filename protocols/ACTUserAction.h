
@protocol ACTUserAction <NSObject>

@required

- (void)applyWithTyper:(TIKeyboardTyper *)arg1 log:(TITypingLog *)arg2;
- (unsigned long long)inputSegment;
- (void)setInputSegment:(unsigned long long)arg1;
- (NSString *)shortDescription;

@end
