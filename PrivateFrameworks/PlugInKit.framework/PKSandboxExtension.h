
@interface PKSandboxExtension : NSObject {
    long long  _handle;
    NSString * _token;
}

@property long long handle;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (void)consume;
- (void)dealloc;
- (void)expel;
- (long long)handle;
- (id)initWithExtension:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHandle:(long long)arg1;
- (id)token;

@end
