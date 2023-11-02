
@interface HFLocalizableStringKey : NSObject <NSCopying> {
    NSArray * _argumentKeys;
    NSMutableDictionary * _argumentMap;
    NSString * _key;
    id /* block */  _stringLocalizationBlock;
}

@property (nonatomic, retain) NSArray *argumentKeys;
@property (nonatomic, readonly) NSMutableDictionary *argumentMap;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, copy) id /* block */ stringLocalizationBlock;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)stringKeyWithKey:(id)arg1 argumentKeys:(id)arg2;
+ (id)stringKeyWithKey:(id)arg1 arguments:(id)arg2;

- (void).cxx_destruct;
- (id)argumentKeys;
- (id)argumentMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithKey:(id)arg1 argumentKeys:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)localizedStringWithArgumentBlock:(id /* block */)arg1;
- (void)setArgumentKeys:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setStringLocalizationBlock:(id /* block */)arg1;
- (id /* block */)stringLocalizationBlock;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

+ (id /* block */)hre_localizationBlock;
+ (id)hre_stringKeyWithKey:(id)arg1 argumentKeys:(id)arg2;
+ (id)hre_stringKeyWithKey:(id)arg1 arguments:(id)arg2;

@end
