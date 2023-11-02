
@interface RepairToolRequestItem : NSObject {
    NSString * _destination;
    NSString * _encryptionKey;
    NSDictionary * _extraHeaders;
    NSString * _token;
}

@property (nonatomic, retain) NSString *destination;
@property (nonatomic, retain) NSString *encryptionKey;
@property (nonatomic, retain) NSDictionary *extraHeaders;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (id)destination;
- (id)encryptionKey;
- (id)extraHeaders;
- (id)initWithDestination:(id)arg1 andEncryptionKey:(id)arg2 andToken:(id)arg3 andExtraHeaders:(id)arg4;
- (void)setDestination:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setExtraHeaders:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
