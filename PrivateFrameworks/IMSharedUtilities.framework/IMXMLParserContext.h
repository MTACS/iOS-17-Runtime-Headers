
@interface IMXMLParserContext : NSObject {
    NSData * _inContentAsData;
}

@property (readonly, retain) NSData *inContentAsData;
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;

- (void)dealloc;
- (id)inContent;
- (id)inContentAsData;
- (id)initWithContent:(id)arg1;
- (id)initWithContentAsData:(id)arg1;
- (id)name;
- (void)reset;
- (id)resultsForLogging;

@end
