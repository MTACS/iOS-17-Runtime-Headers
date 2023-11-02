
@interface SVDDeviceUnitSwiftDeprecated : NSObject <NSSecureCoding> {
    void assistantId;
    void identifier;
    void name;
    void proximity;
    void roomName;
}

@property (nonatomic, readonly) long long hash;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
