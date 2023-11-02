
@interface PHPersistentChangeFetchOptions : NSObject {
    bool  _excludesPrivateChanges;
    unsigned long long  _maximumChangeThreshold;
}

@property (nonatomic) bool excludesPrivateChanges;
@property (nonatomic) unsigned long long maximumChangeThreshold;

- (bool)excludesPrivateChanges;
- (unsigned long long)maximumChangeThreshold;
- (void)setExcludesPrivateChanges:(bool)arg1;
- (void)setMaximumChangeThreshold:(unsigned long long)arg1;

@end
