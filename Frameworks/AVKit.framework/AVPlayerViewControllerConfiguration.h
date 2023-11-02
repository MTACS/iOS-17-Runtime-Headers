
@interface AVPlayerViewControllerConfiguration : NSObject <NSCopying> {
    unsigned long long  _excludedControls;
}

@property (nonatomic) unsigned long long excludedControls;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)excludedControls;
- (id)init;
- (void)setExcludedControls:(unsigned long long)arg1;

@end
