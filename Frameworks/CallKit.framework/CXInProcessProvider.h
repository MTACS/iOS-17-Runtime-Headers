
@interface CXInProcessProvider : CXProvider {
    CXInProcessCallSource * _callSource;
    NSString * _identifier;
}

@property (nonatomic) CXInProcessCallSource *callSource;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)callSource;
- (id)hostProtocolDelegate;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 callSource:(id)arg2;
- (void)setCallSource:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
