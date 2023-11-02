
@interface WFTrelloObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)identifier;
- (id)name;
- (void)setName:(id)arg1;
- (id)wfName;

@end
