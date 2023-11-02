
@interface PHPersistentChangeFetchRequest : NSObject {
    unsigned long long  _maximumChangeThreshold;
    PHPersistentChangeToken * _token;
}

@property (nonatomic) unsigned long long maximumChangeThreshold;
@property (nonatomic, copy) PHPersistentChangeToken *token;

- (void).cxx_destruct;
- (unsigned long long)maximumChangeThreshold;
- (void)setMaximumChangeThreshold:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
