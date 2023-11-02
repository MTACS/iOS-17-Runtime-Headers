
@interface TRAMutablePreferencesOrientation : TRAPreferencesOrientation

@property (nonatomic) bool canDetermineActiveOrientation;
@property (nonatomic) long long preferredOrientation;
@property (nonatomic) unsigned long long supportedOrientations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCanDetermineActiveOrientation:(bool)arg1;
- (void)setPreferredOrientation:(long long)arg1;
- (void)setSupportedOrientations:(unsigned long long)arg1;

@end
