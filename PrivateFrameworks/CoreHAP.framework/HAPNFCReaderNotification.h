
@interface HAPNFCReaderNotification : HMFObject <HAPNFCReaderStream> {
    HAPNFCReaderXPC * _nfcHomeKit;
    HAPNFCReaderXPC * _tagProxCard;
}

@property (retain) HAPNFCReaderXPC *nfcHomeKit;
@property (retain) HAPNFCReaderXPC *tagProxCard;

+ (void)start;

- (void).cxx_destruct;
- (void)_initializeHomeKitNFCStreamWithQueue:(id)arg1 backgroundReadingSupported:(bool)arg2;
- (id)_initializeNFCStream:(id)arg1 withSource:(unsigned long long)arg2 workQueue:(id)arg3 backgroundReadingSupported:(bool)arg4;
- (void)_initializeProxCardStreamWithQueue:(id)arg1 backgroundReadingSupported:(bool)arg2;
- (void)_sendHomeNotificationForSource:(unsigned long long)arg1 withDictionary:(id)arg2;
- (id)init;
- (id)nfcHomeKit;
- (void)nfcStreamIndicationFromSource:(unsigned long long)arg1 withPayload:(id)arg2;
- (void)setNfcHomeKit:(id)arg1;
- (void)setTagProxCard:(id)arg1;
- (id)setupNotificationDictionaryWithNFCData:(id)arg1;
- (id)tagProxCard;

@end
