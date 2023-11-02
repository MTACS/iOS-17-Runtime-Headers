
@protocol MPUHTMLParserDelegate <NSObject>

@optional

- (NSDictionary *)defaultAttributesForParser:(MPUHTMLParser *)arg1;
- (NSDictionary *)parser:(MPUHTMLParser *)arg1 attributesForTagName:(NSString *)arg2 tagAttributes:(NSDictionary *)arg3 currentState:(id <MPUHTMLParserState>)arg4;
- (NSString *)parser:(MPUHTMLParser *)arg1 prependStringForTagName:(NSString *)arg2;

@end
