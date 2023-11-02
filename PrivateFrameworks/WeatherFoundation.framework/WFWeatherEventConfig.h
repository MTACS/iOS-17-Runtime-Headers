
@interface WFWeatherEventConfig : NSObject <NSCopying> {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enabled;
- (id)initWithDictionary:(id)arg1 defaulEnabled:(bool)arg2;
- (void)setEnabled:(bool)arg1;

@end
