
@interface ICSConference : ICSProperty

@property (nonatomic, retain) NSString *feature;
@property (nonatomic, retain) NSString *info;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *region;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (unsigned long long)currentHash;
- (id)feature;
- (id)info;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqualToConference:(id)arg1;
- (id)language;
- (id)region;
- (void)setFeature:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRegion:(id)arg1;

@end
