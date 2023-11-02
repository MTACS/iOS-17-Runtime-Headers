
@interface PlayVideoIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) long long code;
@property (nonatomic, retain) NSNumber *isEntitled;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic, copy) NSURL *urlToLaunch;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
