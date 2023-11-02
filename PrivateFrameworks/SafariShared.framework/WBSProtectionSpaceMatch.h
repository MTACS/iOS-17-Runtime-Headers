
@interface WBSProtectionSpaceMatch : NSObject {
    NSDictionary * _credentials;
    NSURLCredential * _defaultCredential;
    long long  _matchLevel;
    NSURLProtectionSpace * _protectionSpace;
}

@property (nonatomic, readonly, copy) NSDictionary *credentials;
@property (nonatomic, readonly) NSURLCredential *defaultCredential;
@property (nonatomic, readonly) long long matchLevel;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;

- (void).cxx_destruct;
- (id)credentials;
- (id)debugDescription;
- (id)defaultCredential;
- (id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4;
- (long long)matchLevel;
- (id)protectionSpace;

@end
