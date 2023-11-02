
@interface AVContentKeyResponseFairPlayStreaming : AVContentKeyResponse {
    NSData * _keyData;
    NSDate * _renewalDate;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 renewalDate:(id)arg2;

@end
