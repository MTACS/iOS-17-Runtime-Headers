
@interface _EXExtensionAvailablility : NSObject <NSSecureCoding> {
    long long  _disabledCount;
    long long  _enabledCount;
    long long  _unelectedCount;
}

@property long long disabledCount;
@property long long enabledCount;
@property long long unelectedCount;

+ (id)addChangeObserver:(id /* block */)arg1;
+ (void)removeChangeObserver:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)disabledCount;
- (long long)enabledCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDisabledCount:(long long)arg1;
- (void)setEnabledCount:(long long)arg1;
- (void)setUnelectedCount:(long long)arg1;
- (long long)unelectedCount;

@end
