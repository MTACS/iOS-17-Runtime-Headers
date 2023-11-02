
@interface NFCFeliCaTag : NFCTag <NFCFeliCaTag>

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly, retain) NSData *currentIDm;
@property (nonatomic, readonly, retain) NSData *currentSystemCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentIDm;
- (id)currentSystemCode;
- (void)pollingWithSystemCode:(id)arg1 requestCode:(long long)arg2 timeSlot:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)readWithoutEncryptionWithServiceCodeList:(id)arg1 blockList:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestResponseWithCompletionHandler:(id /* block */)arg1;
- (void)requestServiceV2WithNodeCodeList:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestServiceWithNodeCodeList:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSpecificationVersionWithCompletionHandler:(id /* block */)arg1;
- (void)requestSystemCodeWithCompletionHandler:(id /* block */)arg1;
- (void)resetModeWithCompletionHandler:(id /* block */)arg1;
- (void)sendFeliCaCommandPacket:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeWithoutEncryptionWithServiceCodeList:(id)arg1 blockList:(id)arg2 blockData:(id)arg3 completionHandler:(id /* block */)arg4;

@end
