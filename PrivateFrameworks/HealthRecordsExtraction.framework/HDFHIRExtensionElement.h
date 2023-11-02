
@interface HDFHIRExtensionElement : NSObject <NSCopying> {
    NSDictionary * _JSONDictionary;
    NSString * _URI;
    <NSCopying> * _value;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONDictionary;
@property (nonatomic, readonly, copy) NSString *URI;
@property (nonatomic, readonly, copy) <NSCopying> *value;

+ (id)FHIRExtensionElementWithJSONObject:(id)arg1 error:(id*)arg2;
+ (id)FHIRExtensionElementsFromJSONExtensionObject:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 URI:(id)arg2 value:(id)arg3;
- (id)value;

@end
