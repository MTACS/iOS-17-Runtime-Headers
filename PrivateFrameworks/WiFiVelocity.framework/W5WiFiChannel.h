
@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding> {
    long long  _channel;
    unsigned int  _flags;
}

@property (nonatomic, readonly) long long channel;
@property (nonatomic, readonly) unsigned int flags;

+ (bool)supportsSecureCoding;

- (long long)channel;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChannel:(long long)arg1 flags:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;

@end
