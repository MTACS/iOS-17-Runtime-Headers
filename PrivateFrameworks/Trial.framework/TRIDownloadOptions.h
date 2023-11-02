
@interface TRIDownloadOptions : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _activity;
    bool  _allowsBatteryUsage;
    bool  _allowsCellularAccess;
    unsigned long long  _discretionaryBehavior;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool allowsBatteryUsage;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) unsigned long long discretionaryBehavior;
@property (nonatomic, readonly) unsigned long long requiredCapability;

+ (id)inexpensiveOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (bool)allowsBatteryUsage;
- (bool)allowsCellularAccess;
- (id)description;
- (unsigned long long)discretionaryBehavior;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromPersistedBehavior:(id)arg1;
- (id)initWithAllowsCellular:(bool)arg1 discretionaryBehavior:(unsigned long long)arg2;
- (id)initWithAllowsCellular:(bool)arg1 discretionaryBehavior:(unsigned long long)arg2 activity:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requiredCapability;
- (id)serializeToPersistedBehavior;
- (void)setActivity:(id)arg1;
- (void)setAllowsBatteryUsage:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setDiscretionaryBehavior:(unsigned long long)arg1;

@end
