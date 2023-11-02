
@interface XRXMLElementParser : NSObject {
    long long  _colOfEnd;
    long long  _colOfStart;
    NSDictionary * _elementAttributes;
    NSString * _elementName;
    NSDictionary * _elementToClass;
    NSDictionary * _elementToKVC;
    long long  _lineOfEnd;
    long long  _lineOfStart;
    id  context;
    XRXMLElementParser * parent;
}

@property (nonatomic, readonly) NSDictionary *elementAttributes;
@property (nonatomic, readonly) NSString *elementName;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void).cxx_destruct;
- (void)_handleCharacters:(id)arg1;
- (void)_handleCompletion;
- (void)_handleStart;
- (id)elementAttributes;
- (id)elementName;
- (id)endElementAtLine:(long long)arg1 col:(long long)arg2;
- (id)initWithElementName:(id)arg1 context:(id)arg2;
- (id)lineAndColumnForElementEnd;
- (id)lineAndColumnForElementStart;
- (void)processCharacters:(id)arg1;
- (void)setValue:(id)arg1 forElementName:(id)arg2;
- (void)simulateEmptyElement:(id)arg1;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (id)valueForElementName:(id)arg1;

@end
