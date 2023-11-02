
@protocol RFTextElement <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)formatted_text;
- (NSData *)jsonData;
- (NSNumber *)line_limit;
- (void)setFormatted_text:(NSArray *)arg1;
- (void)setLine_limit:(NSNumber *)arg1;

@end
