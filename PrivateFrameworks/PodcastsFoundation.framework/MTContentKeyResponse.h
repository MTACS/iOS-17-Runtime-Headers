
@interface MTContentKeyResponse : NSObject {
    void error;
    void keyData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  renewalDate;
    void request;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSData *keyData;
@property (nonatomic, readonly) NSDate *renewalDate;
@property (nonatomic, readonly) MTContentKeyRequest *request;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 keyData:(id)arg2 renewalDate:(id)arg3 error:(id)arg4;
- (id)keyData;
- (id)renewalDate;
- (id)request;
- (void)setError:(id)arg1;
- (void)setKeyData:(id)arg1;

@end
