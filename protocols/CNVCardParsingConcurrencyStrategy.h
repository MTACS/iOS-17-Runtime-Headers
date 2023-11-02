
@protocol CNVCardParsingConcurrencyStrategy <NSObject>

@required

- (NSArray *)parseData:(NSData *)arg1 options:(CNVCardReadingOptions *)arg2 resultFactory:(id <CNVCardParsedResultBuilderFactory>)arg3;

@end
