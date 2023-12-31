
@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *constructorName;
@property (nonatomic, copy) NSArray *fields;
@property (nonatomic) bool isImprecise;
@property (nonatomic, copy) NSArray *optionalFields;
@property (nonatomic, retain) RWIProtocolRuntimeStructureDescription *prototypeStructure;

- (id)constructorName;
- (id)fields;
- (bool)isImprecise;
- (id)optionalFields;
- (id)prototypeStructure;
- (void)setConstructorName:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setIsImprecise:(bool)arg1;
- (void)setOptionalFields:(id)arg1;
- (void)setPrototypeStructure:(id)arg1;

@end
