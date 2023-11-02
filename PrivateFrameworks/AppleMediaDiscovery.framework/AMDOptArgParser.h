
@interface AMDOptArgParser : NSObject {
    NSMutableDictionary * _options;
    NSMutableDictionary * _parsedOptArgs;
    NSMutableDictionary * _shortOptions;
}

@property (nonatomic, retain) NSMutableDictionary *options;
@property (nonatomic, retain) NSMutableDictionary *parsedOptArgs;
@property (nonatomic, retain) NSMutableDictionary *shortOptions;

- (void).cxx_destruct;
- (id)getValueForOption:(id)arg1;
- (id)initWithOptArgs:(id)arg1;
- (id)options;
- (id)parseArgs:(id)arg1;
- (id)parsedOptArgs;
- (void)setOptions:(id)arg1;
- (void)setParsedOptArgs:(id)arg1;
- (void)setShortOptions:(id)arg1;
- (id)shortOptions;
- (void)showHelp;

@end
