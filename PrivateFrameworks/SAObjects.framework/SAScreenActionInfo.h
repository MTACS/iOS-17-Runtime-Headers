
@interface SAScreenActionInfo : SADomainObject

@property (nonatomic, copy) NSString *elementId;
@property (nonatomic, copy) NSArray *examples;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *semanticData;
@property (nonatomic, copy) NSURL *semanticId;
@property (nonatomic, copy) NSURL *type;
@property (nonatomic, copy) NSString *value;

+ (id)info;
+ (id)infoWithDictionary:(id)arg1 context:(id)arg2;

- (id)elementId;
- (id)encodedClassName;
- (id)examples;
- (id)groupIdentifier;
- (id)language;
- (id)semanticData;
- (id)semanticId;
- (void)setElementId:(id)arg1;
- (void)setExamples:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSemanticData:(id)arg1;
- (void)setSemanticId:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)value;

@end
