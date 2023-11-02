
@protocol NFCTag <NSObject, NSSecureCoding, NSCopying>

@required

- (<NFCFeliCaTag> *)asNFCFeliCaTag;
- (<NFCISO15693Tag> *)asNFCISO15693Tag;
- (<NFCISO7816Tag> *)asNFCISO7816Tag;
- (<NFCMiFareTag> *)asNFCMiFareTag;
- (bool)isAvailable;
- (<NFCReaderSession> *)session;
- (unsigned long long)type;

@end
