
@interface PCSKeybagKey : NSObject <NSSecureCoding> {
    NSData * _data;
    long long  _flags;
}

@property (retain) NSData *data;
@property long long flags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (id)initWithCoder:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFlags:(long long)arg1;

@end
