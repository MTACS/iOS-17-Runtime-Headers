
@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *internalVerifications;
@property (nonatomic, copy) NSArray *serverChecksums;
@property (nonatomic, copy) NSArray *syncDebugInfo;

+ (id)serverVerifyResponse;
+ (id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)internalVerifications;
- (bool)requiresResponse;
- (id)serverChecksums;
- (void)setInternalVerifications:(id)arg1;
- (void)setServerChecksums:(id)arg1;
- (void)setSyncDebugInfo:(id)arg1;
- (id)syncDebugInfo;

@end
