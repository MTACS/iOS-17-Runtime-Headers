
@protocol PKNFCTagReaderSessionDelegate <NSObject>

@optional

- (void)nfcTagReaderSession:(PKNFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSessionDidTimeout:(PKNFCTagReaderSession *)arg1;

@end
