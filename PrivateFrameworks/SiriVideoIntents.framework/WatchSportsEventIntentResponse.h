
@interface WatchSportsEventIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appStorePunchoutUrl;
@property (nonatomic) long long code;
@property (nonatomic, retain) NSNumber *isAppInstalled;
@property (nonatomic, retain) NSNumber *isEntitledToPlayOnDevice;
@property (nonatomic, copy) NSString *playablePunchoutUrl;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
