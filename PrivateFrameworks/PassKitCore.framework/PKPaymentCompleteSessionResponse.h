
@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {
    NSString * _retryNonce;
}

@property (nonatomic, readonly, copy) NSString *retryNonce;

- (void).cxx_destruct;
- (id)retryNonce;

@end
