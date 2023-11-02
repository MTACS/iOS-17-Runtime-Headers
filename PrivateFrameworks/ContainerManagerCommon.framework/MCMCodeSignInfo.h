
@interface MCMCodeSignInfo : NSObject {
    NSDictionary * _entitlements;
    NSString * _identifier;
    unsigned int  _platform;
}

@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int platform;

- (void).cxx_destruct;
- (id)entitlements;
- (id)identifier;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithURL:(id)arg1 error:(unsigned long long*)arg2;
- (unsigned int)platform;

@end
