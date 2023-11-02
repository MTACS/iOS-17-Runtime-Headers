
@interface AMSUIMessageMarkdownGenerator : NSObject <AMSUIMarkdownParserDelegate> {
    NSMutableAttributedString * _accumulator;
    NSMutableArray * _attributeStack;
    AMSUIMessageMarkdownConfiguration * _configuration;
    bool  _didParseEverything;
    AMSUIMarkdownParser * _parser;
    NSString * _symbol;
    NSDictionary * _symbolAttributes;
}

@property (nonatomic, retain) NSMutableAttributedString *accumulator;
@property (nonatomic, retain) NSMutableArray *attributeStack;
@property (nonatomic, retain) AMSUIMessageMarkdownConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didParseEverything;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIMarkdownParser *parser;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *symbol;
@property (nonatomic, retain) NSDictionary *symbolAttributes;

- (void).cxx_destruct;
- (id)accumulator;
- (void)appendStyledString:(id)arg1;
- (id)attributeStack;
- (id)configuration;
- (id)currentFont;
- (id)currentFontAddingFontAttributes:(id)arg1;
- (bool)didParseEverything;
- (id)fontWithTraits:(unsigned int)arg1;
- (id)generate;
- (id)initWithMarkdownString:(id)arg1 configuration:(id)arg2;
- (id)parser;
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(id)arg1 didFindArtworkWithIdentifier:(id)arg2;
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidEndListElement:(id)arg1;
- (void)parserDidFindNewline:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidStartListElement:(id)arg1;
- (void)popAttributes;
- (void)pushAttributes:(id)arg1;
- (id)reconcileElementAttributes:(id)arg1 withFont:(id)arg2;
- (void)setAccumulator:(id)arg1;
- (void)setAttributeStack:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDidParseEverything:(bool)arg1;
- (void)setParser:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolAttributes:(id)arg1;
- (id)symbol;
- (id)symbolAttributes;

@end
