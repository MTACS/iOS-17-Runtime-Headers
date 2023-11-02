
@interface PegasusConfiguration.ConfigInternal : NSObject <PegasusConfiguration.Config> {
    void clientName;
    void data;
    void userAgent;
    void userDefaults;
}

@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) NSString *searchURLString;
@property (nonatomic, readonly) NSString *userAgent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientName;
- (void)encodeWithCoder:(id)arg1;
- (id)findConfigForUserAgent:(id)arg1;
- (id)firstUseDescriptionText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isExpired;
- (id)rawConfig;
- (id)searchURLString;
- (id)userAgent;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 ofType:(Class)arg2;
- (id)valueForKey:(id)arg1 shouldConsiderOverrides:(bool)arg2;

@end
