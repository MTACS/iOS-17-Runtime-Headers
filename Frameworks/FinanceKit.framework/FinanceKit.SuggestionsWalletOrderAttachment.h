
@interface FinanceKit.SuggestionsWalletOrderAttachment : NSObject {
    void data;
    void fqoid;
    void state;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *fqoid;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSURL *url;

+ (id)readContentsOfOrderAt:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)fqoid;
- (id)init;
- (void)setData:(id)arg1;
- (void)setFqoid:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)state;
- (id)url;

@end
