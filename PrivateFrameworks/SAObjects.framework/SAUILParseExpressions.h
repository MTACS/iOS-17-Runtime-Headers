
@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *expressions;
@property (nonatomic, retain) SARemoteDevice *targetDevice;

+ (id)parseExpressions;
+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)expressions;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setExpressions:(id)arg1;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;

@end
