
@interface WFWordPressPostType : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSString * _label;
    NSDictionary * _labels;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSDictionary *labels;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)label;
- (id)labels;
- (id)name;

@end
