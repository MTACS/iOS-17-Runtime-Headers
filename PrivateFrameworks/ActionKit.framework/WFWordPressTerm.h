
@interface WFWordPressTerm : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSString * _name;
    NSString * _taxonomy;
    NSNumber * _termId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *taxonomy;
@property (nonatomic, readonly, copy) NSNumber *termId;

+ (id)JSONKeyPathsByPropertyKey;
+ (bool)supportsSecureCoding;
+ (id)termIdJSONTransformer;

- (void).cxx_destruct;
- (id)name;
- (id)taxonomy;
- (id)termId;

@end
