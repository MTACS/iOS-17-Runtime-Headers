
@interface EQKitEnvironmentInstance : EQKitEnvironment {
    NSDictionary * mConfig;
    struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; } * mFontManager;
    void * mKerningManager;
    struct Config { int x1; bool x2; bool x3; bool x4; bool x5; } * mLayoutConfig;
    void * mOperatorDictionary;
}

@property (nonatomic) bool kerning;

+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;

- (void)beginLayout;
- (void)dealloc;
- (void)endLayout;
- (const struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; }*)fontManager;
- (bool)fontsLoaded;
- (id)initWithConfig:(id)arg1;
- (bool)kerning;
- (const void*)kerningManager;
- (const struct Config { int x1; bool x2; bool x3; bool x4; bool x5; }*)layoutConfig;
- (id)newDictionaryForArchiving;
- (const void*)operatorDictionary;
- (void)setKerning:(bool)arg1;

@end
