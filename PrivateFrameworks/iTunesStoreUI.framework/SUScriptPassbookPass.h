
@interface SUScriptPassbookPass : SUScriptObject {
    PKPass * _pass;
}

@property (readonly) NSString *passTypeIdentifier;
@property (readonly) NSString *passURL;
@property (readonly) NSString *serialNumber;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)scriptAttributeKeys;
- (id)serialNumber;

@end
