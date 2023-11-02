
@interface AXMTranslationModelInstallStatus : NSObject {
    NSString * _localeIdentifier;
    long long  _progress;
    unsigned long long  _state;
}

@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic) long long progress;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)localeIdentifier;
- (long long)progress;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setProgress:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
