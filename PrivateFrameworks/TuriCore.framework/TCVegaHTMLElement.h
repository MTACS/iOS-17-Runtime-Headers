
@interface TCVegaHTMLElement : NSObject <TCVegaHTMLElementInterface> {
    NSMutableArray * childNodes;
    NSMutableDictionary * events;
    TCVegaCSSStyleDeclaration * style;
    NSString * tagName;
}

@property (nonatomic, retain) NSMutableArray *childNodes;
@property (nonatomic, retain) NSMutableDictionary *events;
@property (nonatomic, retain) TCVegaCSSStyleDeclaration *style;
@property (nonatomic, retain) NSString *tagName;

- (void).cxx_destruct;
- (void)addEventListenerWithType:(id)arg1 listener:(id)arg2;
- (id)appendWithChild:(id)arg1;
- (id)childNodes;
- (id)events;
- (id)getBoundingClientRect;
- (id)init;
- (id)initWithTagName:(id)arg1;
- (id)parentNode;
- (id)removeWithChild:(id)arg1;
- (void)setAttributeWithName:(id)arg1 value:(id)arg2;
- (void)setChildNodes:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTagName:(id)arg1;
- (id)style;
- (id)tagName;

@end
