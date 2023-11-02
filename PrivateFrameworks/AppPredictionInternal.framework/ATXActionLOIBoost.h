
@interface ATXActionLOIBoost : NSObject {
    NSDictionary * _boostDictionary;
}

+ (double)decayRateWithScale:(double)arg1 distance:(double)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)boostForActionKey:(id)arg1;
- (id)initWithBoostDictionary:(id)arg1;

@end
