
@interface AMSMockBagBuilder : NSObject {
    NSMutableDictionary * _data;
    NSDate * _expirationDate;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, retain) NSMutableDictionary *data;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSString *profileVersion;

- (void).cxx_destruct;
- (void)addBagKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
- (id)createMockBag;
- (id)data;
- (id)expirationDate;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)profile;
- (id)profileVersion;
- (void)setData:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;
- (void)unionBagKeySet:(id)arg1;

@end
