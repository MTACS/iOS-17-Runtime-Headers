
@interface CLMiLoConnectionStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _connectionState;
}

@property (nonatomic, readonly) unsigned long long connectionState;

+ (bool)supportsSecureCoding;

- (unsigned long long)connectionState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnectionState:(unsigned long long)arg1;

@end
