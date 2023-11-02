
@interface STSNFCHandoverHandler : NSObject {
    NSMutableData * _apduBuffer;
    unsigned long long  _readIndex;
    NSData * _responseBuffer;
}

- (void).cxx_destruct;
- (id)init;

@end
