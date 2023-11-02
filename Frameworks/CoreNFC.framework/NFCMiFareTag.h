
@interface NFCMiFareTag : NFCTag <NFCMiFareTag> {
    unsigned long long  _mifareFamily;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *historicalBytes;
@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic) unsigned long long mifareFamily;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (unsigned long long)mifareFamily;
- (void)sendMiFareCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMiFareISO7816Command:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMifareFamily:(unsigned long long)arg1;

@end
