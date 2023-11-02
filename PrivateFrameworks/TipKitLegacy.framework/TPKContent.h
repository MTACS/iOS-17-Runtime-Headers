
@interface TPKContent : NSObject <NSCopying, NSSecureCoding> {
    void cachedViewModel;
    void customizationID;
    void displayCount;
    void identifier;
    void monitoringEvents;
    void state;
    void tip;
    void userInfo;
    void version;
}

@property (nonatomic) long long customizationID;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long displayCount;
@property (nonatomic, readonly) bool hasTipContent;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isLocalContent;
@property (nonatomic, retain) TPSMonitoringEvents *monitoringEvents;
@property (nonatomic, readonly) NSError *parsingError;
@property (nonatomic) long long state;
@property (nonatomic, retain) TPSDiscoverabilityTip *tip;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) long long version;

+ (id)emptyContent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)createCachedViewModelUsingViewDelegate:(id)arg1;
- (long long)customizationID;
- (id)debugDescription;
- (id)description;
- (long long)displayCount;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTipContent;
- (id)identifier;
- (void)incrementDisplaycount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopy:(id)arg1;
- (id)initWithDiscoverabilityTip:(id)arg1 monitoringEvents:(id)arg2 customizationID:(long long)arg3 userInfo:(id)arg4;
- (id)initWithIdentifier:(id)arg1 monitoringEvents:(id)arg2 customizationID:(long long)arg3 userInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isLocalContent;
- (unsigned long long)monitoringEventOptionsForCurrentState;
- (unsigned long long)monitoringEventOptionsMatchedWithRegistrableEventIdentifier:(id)arg1;
- (id)monitoringEvents;
- (id)parsingError;
- (void)setCustomizationID:(long long)arg1;
- (void)setDisplayCount:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMonitoringEvents:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTip:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)state;
- (id)tip;
- (void)updateDisplayCount:(long long)arg1;
- (void)updateState:(long long)arg1;
- (id)userInfo;
- (long long)version;

@end
