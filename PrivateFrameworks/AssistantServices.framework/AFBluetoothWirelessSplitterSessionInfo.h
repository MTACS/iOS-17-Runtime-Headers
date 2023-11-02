
@interface AFBluetoothWirelessSplitterSessionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _deviceAddresses;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSArray *deviceAddresses;
@property (nonatomic, readonly) long long state;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 deviceAddresses:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)state;

@end
