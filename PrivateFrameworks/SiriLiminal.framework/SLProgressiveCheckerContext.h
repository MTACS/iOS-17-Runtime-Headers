
@interface SLProgressiveCheckerContext : NSObject {
    unsigned long long  _audioOption;
    unsigned long long  _invocationType;
    NSString * _locale;
    NSDictionary * _vtei;
}

@property (nonatomic, readonly) unsigned long long audioOption;
@property (nonatomic, readonly) unsigned long long invocationType;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSDictionary *vtei;

- (void).cxx_destruct;
- (unsigned long long)audioOption;
- (id)initWithContext:(id)arg1 error:(id*)arg2;
- (unsigned long long)invocationType;
- (id)locale;
- (id)vtei;

@end
