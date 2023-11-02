
@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *subType;
@property (nonatomic, copy) NSDictionary *subTypeContext;

+ (id)logSignatureWithABC;
+ (id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSubType:(id)arg1;
- (void)setSubTypeContext:(id)arg1;
- (id)subType;
- (id)subTypeContext;

@end
