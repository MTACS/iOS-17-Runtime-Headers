
@protocol TCVegaHTMLElementInterface <JSExport>

@required

- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2;
- (NSObject<TCVegaHTMLElementInterface> *)appendWithChild:(NSObject<TCVegaHTMLElementInterface> *)arg1;
- (NSMutableArray *)childNodes;
- (NSMutableDictionary *)events;
- (NSDictionary *)getBoundingClientRect;
- (id)initWithTagName:(NSString *)arg1;
- (id)parentNode;
- (NSObject<TCVegaHTMLElementInterface> *)removeWithChild:(NSObject<TCVegaHTMLElementInterface> *)arg1;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2;
- (void)setChildNodes:(NSMutableArray *)arg1;
- (void)setEvents:(NSMutableDictionary *)arg1;
- (void)setStyle:(TCVegaCSSStyleDeclaration *)arg1;
- (void)setTagName:(NSString *)arg1;
- (TCVegaCSSStyleDeclaration *)style;
- (NSString *)tagName;

@optional

- (void)addEventListenerWithType:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__addEventListener:(id)arg3;
- (NSObject<TCVegaHTMLElementInterface> *)appendWithChild:(NSObject<TCVegaHTMLElementInterface> *)arg1 __JS_EXPORT_AS__appendChild:(id)arg2;
- (NSObject<TCVegaHTMLElementInterface> *)removeWithChild:(NSObject<TCVegaHTMLElementInterface> *)arg1 __JS_EXPORT_AS__removeChild:(id)arg2;
- (void)setAttributeWithName:(NSString *)arg1 value:(NSString *)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;

@end
