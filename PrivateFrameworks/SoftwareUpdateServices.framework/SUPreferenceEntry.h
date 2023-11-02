
@interface SUPreferenceEntry : NSObject {
    NSString * _description;
    NSString * _preferenceKey;
    long long  _type;
}

@property (nonatomic, readonly, retain) NSString *description;
@property (nonatomic, readonly, retain) NSString *preferenceKey;
@property (nonatomic, readonly) long long type;

- (id)description;
- (id)initWithKey:(id)arg1 type:(long long)arg2 description:(id)arg3;
- (id)preferenceKey;
- (long long)type;

@end
