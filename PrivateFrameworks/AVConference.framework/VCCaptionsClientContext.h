
@interface VCCaptionsClientContext : NSObject {
    long long  _streamToken;
}

@property (nonatomic, readonly) long long streamToken;

- (id)initWithStreamToken:(long long)arg1;
- (long long)streamToken;

@end
