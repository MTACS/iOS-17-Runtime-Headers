
@interface _ASCLockupResponse : NSObject {
    NSError * _error;
    ASCLockup * _lockup;
    ASCLockupRequest * _request;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) ASCLockup *lockup;
@property (nonatomic, readonly, copy) ASCLockupRequest *request;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 lockup:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lockup;
- (id)request;

@end
