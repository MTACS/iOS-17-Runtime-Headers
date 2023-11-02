
@interface SBFWebClipSanitationReport : NSObject {
    NSError * _error;
    long long  _result;
    UIWebClip * _webClip;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) UIWebClip *webClip;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3;
- (long long)result;
- (id)webClip;

@end
