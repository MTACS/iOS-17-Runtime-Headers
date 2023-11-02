
@interface FCTopStoriesStyleConfiguration : NSObject {
    FCColor * _background_color;
    NSDictionary * _configDict;
    FCColor * _dark_style_background_color;
    FCColor * _dark_style_foreground_color;
    FCColor * _foreground_color;
    NSString * _label;
    NTPBTopStoriesStyleConfig * _pbConfig;
    unsigned long long  _storyType;
    NSString * _stringType;
}

@property (nonatomic, readonly) FCColor *background_color;
@property (nonatomic, readonly) FCColor *dark_style_background_color;
@property (nonatomic, readonly) FCColor *dark_style_foreground_color;
@property (nonatomic, readonly) FCColor *foreground_color;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long storyType;
@property (nonatomic, readonly) NSString *stringType;

- (void).cxx_destruct;
- (id)background_color;
- (id)dark_style_background_color;
- (id)dark_style_foreground_color;
- (id)foreground_color;
- (unsigned long long)hash;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)storyType;
- (id)stringType;

@end
