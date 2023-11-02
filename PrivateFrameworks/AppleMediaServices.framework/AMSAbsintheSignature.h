
@interface AMSAbsintheSignature : NSObject {
    NSString * _servKey;
    NSString * _signature;
}

@property (nonatomic, retain) NSString *servKey;
@property (nonatomic, retain) NSString *signature;

- (void).cxx_destruct;
- (id)servKey;
- (void)setServKey:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
