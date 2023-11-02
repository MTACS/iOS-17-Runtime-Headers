
@interface TTSVBSettings : NSObject {
    NSUserDefaults * _defaults;
}

@property (nonatomic) bool allowAppUsage;
@property (nonatomic) bool allowAppUsageDuringCalls;
@property (nonatomic, retain) NSUserDefaults *defaults;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowAppUsage;
- (bool)allowAppUsageDuringCalls;
- (id)defaults;
- (id)init;
- (void)setAllowAppUsage:(bool)arg1;
- (void)setAllowAppUsageDuringCalls:(bool)arg1;
- (void)setDefaults:(id)arg1;

@end
