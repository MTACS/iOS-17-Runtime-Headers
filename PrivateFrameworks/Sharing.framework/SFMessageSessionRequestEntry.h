
@interface SFMessageSessionRequestEntry : NSObject {
    bool  _allowUnencrypted;
    id /* block */  _handler;
    NSDictionary * _options;
}

@property (nonatomic) bool allowUnencrypted;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (bool)allowUnencrypted;
- (id /* block */)handler;
- (id)options;
- (void)setAllowUnencrypted:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setOptions:(id)arg1;

@end
