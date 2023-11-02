
@interface SUScriptMediaPickerEvent : SUScriptObject {
    SUScriptMediaItemCollection * _collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)collection;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)scriptAttributeKeys;

@end
