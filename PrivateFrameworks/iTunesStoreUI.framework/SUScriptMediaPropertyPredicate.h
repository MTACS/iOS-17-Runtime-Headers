
@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString * _comparisonType;
    NSString * _property;
    id  _value;
}

@property (readonly) NSString *comparisonType;
@property (nonatomic, readonly) MPMediaPropertyPredicate *nativePredicate;
@property (readonly) NSString *property;
@property (readonly) id value;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)attributeKeys;
- (id)comparisonType;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativePredicate;
- (id)property;
- (id)scriptAttributeKeys;
- (id)value;

@end
