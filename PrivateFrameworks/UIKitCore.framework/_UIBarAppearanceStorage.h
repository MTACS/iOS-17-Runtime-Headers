
@interface _UIBarAppearanceStorage : NSObject {
    NSMutableDictionary * _backgroundImages;
}

+ (long long)typicalBarPosition;

- (void).cxx_destruct;
- (id)allBackgroundImages;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (bool)hasAnyCustomBackgroundImage;
- (void)setAllBackgroundImages:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;

@end
