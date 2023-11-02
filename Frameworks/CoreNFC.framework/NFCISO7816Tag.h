
@interface NFCISO7816Tag : NFCTag <NFCISO7816Tag>

@property (nonatomic, readonly, copy) NSData *applicationData;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *historicalBytes;
@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic, readonly, retain) NSString *initialSelectedAID;
@property (nonatomic, readonly) bool proprietaryApplicationDataCoding;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initialSelectedAID;
- (void)sendCommandAPDU:(id)arg1 completionHandler:(id /* block */)arg2;

@end
