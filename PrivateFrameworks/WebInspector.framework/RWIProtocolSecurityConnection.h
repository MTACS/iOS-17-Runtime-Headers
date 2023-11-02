
@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *cipher;
@property (nonatomic, copy) NSString *protocol;

- (id)cipher;
- (id)protocol;
- (void)setCipher:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
