
@interface MLRSandboxExtensionRequest : NSObject {
    NSArray * _URLs;
    bool  _requireWrite;
}

@property (nonatomic, readonly, copy) NSArray *URLs;
@property (nonatomic, readonly) bool requireWrite;

- (void).cxx_destruct;
- (id)URLs;
- (id)description;
- (id)initWithURLs:(id)arg1 requireWrite:(bool)arg2;
- (bool)requireWrite;

@end
