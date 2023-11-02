
@interface NRDeviceMiniStore : NSObject <NSSecureCoding> {
    NSDictionary * _store;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fullStore;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)objectForKey:(id)arg1;

@end
