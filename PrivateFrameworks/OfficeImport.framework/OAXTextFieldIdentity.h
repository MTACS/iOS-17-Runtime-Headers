
@interface OAXTextFieldIdentity : OITSUPair

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *type;

+ (id)identityWithGuid:(id)arg1 type:(id)arg2;

- (id)guid;
- (id)type;

@end
