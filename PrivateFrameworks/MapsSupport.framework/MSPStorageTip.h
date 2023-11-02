
@interface MSPStorageTip : NSObject {
    id /* block */  _enablementAction;
    long long  _expectedSize;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) long long expectedSize;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *representedApp;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)enableWithCompletionHandler:(id /* block */)arg1;
- (long long)expectedSize;
- (id)initWithTitle:(id)arg1 message:(id)arg2 expectedSize:(long long)arg3 enablementAction:(id /* block */)arg4;
- (id)message;
- (id)representedApp;
- (id)title;

@end
