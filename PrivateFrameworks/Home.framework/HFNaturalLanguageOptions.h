
@interface HFNaturalLanguageOptions : NSObject <NSCopying> {
    NSMutableDictionary * _extraOptions;
    HMHome * _home;
}

@property (nonatomic, readonly) NSMutableDictionary *extraOptions;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extraOptions;
- (id)home;
- (id)init;

@end
