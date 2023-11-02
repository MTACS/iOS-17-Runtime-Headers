
@interface FCContentColorPair : NSObject {
    FCColor * _darkColor;
    FCColor * _lightColor;
}

@property (nonatomic, readonly, copy) FCColor *darkColor;
@property (nonatomic, readonly, copy) FCColor *lightColor;

+ (id)colorPairWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)darkColor;
- (id)initWithLightColor:(id)arg1 darkColor:(id)arg2;
- (id)lightColor;

@end
