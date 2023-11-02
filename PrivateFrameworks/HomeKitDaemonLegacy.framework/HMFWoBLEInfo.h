
@interface HMFWoBLEInfo : HMFObject <NSSecureCoding> {
    NSData * _bleIdentifier;
}

@property (nonatomic, readonly) NSData *bleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBLEIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
