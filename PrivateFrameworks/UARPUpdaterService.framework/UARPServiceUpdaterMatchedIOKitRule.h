
@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _registryEntryID;
}

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long registryEntryID;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 registryEntryID:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)registryEntryID;

@end
