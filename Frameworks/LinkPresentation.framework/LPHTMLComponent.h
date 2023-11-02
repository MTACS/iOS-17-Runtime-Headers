
@interface LPHTMLComponent : NSObject {
    NSMutableArray * _children;
    DOMElement * _element;
    LPLinkHTMLGenerator * _generator;
    NSString * _themePath;
}

@property (nonatomic, readonly) DOMElement *element;
@property (nonatomic, readonly) LPLinkHTMLGenerator *generator;
@property (nonatomic, readonly) NSString *themePath;

+ (id)ruleDictionaryForStyle:(id)arg1;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (id)childThemePathWithName:(id)arg1;
- (id)element;
- (id)generator;
- (id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3;
- (id)themePath;

@end
