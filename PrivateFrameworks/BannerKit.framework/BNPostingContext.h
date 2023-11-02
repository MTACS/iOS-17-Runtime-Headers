
@interface BNPostingContext : NSObject {
    <BNPresentable> * _presentable;
    unsigned long long  _presentationOptions;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSUUID *pendingIdentifier;
@property (nonatomic, readonly) <BNPresentable> *presentable;
@property (nonatomic, readonly) unsigned long long presentationOptions;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithPresentable:(id)arg1 presentationOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)pendingIdentifier;
- (id)presentable;
- (unsigned long long)presentationOptions;
- (id)userInfo;

@end
