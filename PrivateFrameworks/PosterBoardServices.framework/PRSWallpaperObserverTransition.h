
@interface PRSWallpaperObserverTransition : NSObject {
    unsigned long long  _changed;
}

@property (nonatomic) unsigned long long changed;

- (id)_initWithChanged:(unsigned long long)arg1;
- (unsigned long long)changed;
- (id)description;
- (id)init;
- (void)setChanged:(unsigned long long)arg1;

@end
