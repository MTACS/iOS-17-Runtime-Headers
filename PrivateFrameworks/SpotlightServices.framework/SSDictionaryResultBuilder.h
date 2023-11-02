
@interface SSDictionaryResultBuilder : SSResultBuilder {
    NSString * _definitionString;
    NSArray * _definitions;
    NSString * _dictionaryName;
    NSURL * _dictionaryURL;
    NSString * _word;
}

@property (nonatomic, retain) NSString *definitionString;
@property (nonatomic, retain) NSArray *definitions;
@property (nonatomic, retain) NSString *dictionaryName;
@property (nonatomic, retain) NSURL *dictionaryURL;
@property (nonatomic, retain) NSString *word;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildTitle;
- (id)definitionString;
- (id)definitions;
- (id)dictionaryName;
- (id)dictionaryURL;
- (id)initWithResult:(id)arg1;
- (void)setDefinitionString:(id)arg1;
- (void)setDefinitions:(id)arg1;
- (void)setDictionaryName:(id)arg1;
- (void)setDictionaryURL:(id)arg1;
- (void)setWord:(id)arg1;
- (id)word;

@end
