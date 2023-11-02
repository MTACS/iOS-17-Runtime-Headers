
@interface SFRemoteAutoFillScanAction : NSObject {
    NSString * _message;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

+ (void)actionForURL:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)message;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
