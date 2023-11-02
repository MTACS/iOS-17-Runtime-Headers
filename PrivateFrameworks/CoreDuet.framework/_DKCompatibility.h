
@interface _DKCompatibility : NSObject {
    long long  _max;
    long long  _min;
}

@property (nonatomic) long long max;
@property (nonatomic) long long min;

+ (id)compatibilityFromSerializedCompatibility:(id)arg1;
+ (id)compatibilityWithMinVersion:(long long)arg1 maxVersion:(long long)arg2;
+ (id)currentCompatibility;

- (id)description;
- (id)eventPredicate;
- (id)filterIncompatibleEvents:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)max;
- (long long)min;
- (id)serialize;
- (void)setMax:(long long)arg1;
- (void)setMin:(long long)arg1;

@end
