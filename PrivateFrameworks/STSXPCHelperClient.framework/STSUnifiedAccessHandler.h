
@interface STSUnifiedAccessHandler : NSObject {
    NSData * _endpointIdentifier;
    STSNFCHandoverHandler * _nfcHandoverHandler;
    STSHelperLibrary * _parent;
    NSData * _readerSharedSecret;
}

- (void).cxx_destruct;

@end
