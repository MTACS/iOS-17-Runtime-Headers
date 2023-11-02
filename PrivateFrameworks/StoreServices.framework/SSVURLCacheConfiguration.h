
@interface SSVURLCacheConfiguration : NSObject {
    NSString * _sessionIdentifier;
    bool  _supportsProcessSharing;
}

@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) bool supportsProcessSharing;

- (void).cxx_destruct;
- (id)sessionIdentifier;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSupportsProcessSharing:(bool)arg1;
- (bool)supportsProcessSharing;

@end
