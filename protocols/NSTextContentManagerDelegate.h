
@protocol NSTextContentManagerDelegate <NSObject>

@optional

- (bool)textContentManager:(NSTextContentManager *)arg1 shouldEnumerateTextElement:(NSTextElement *)arg2 options:(unsigned long long)arg3;
- (NSTextElement *)textContentManager:(NSTextContentManager *)arg1 textElementAtLocation:(id <NSTextLocation>)arg2;

@end
