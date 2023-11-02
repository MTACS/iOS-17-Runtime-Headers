
@interface SUScriptPassbookLibrary : SUScriptObject {
    PKPassLibrary * _passLibrary;
}

@property (readonly) NSArray *passes;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithPassLibrary:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passes;
- (id)scriptAttributeKeys;

@end
