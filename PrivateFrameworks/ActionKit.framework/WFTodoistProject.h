
@interface WFTodoistProject : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    bool  _collapsed;
    WFColor * _color;
    NSString * _name;
    long long  _projectId;
}

@property (nonatomic, readonly) bool collapsed;
@property (nonatomic, readonly) WFColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long projectId;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)collapsedJSONTransformer;
+ (id)colorJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)collapsed;
- (id)color;
- (id)name;
- (long long)projectId;

@end
