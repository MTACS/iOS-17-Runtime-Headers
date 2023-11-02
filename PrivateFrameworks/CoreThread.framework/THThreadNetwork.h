
@interface THThreadNetwork : NSObject <NSSecureCoding> {
    NSData * _extendedPANID;
    NSString * _networkName;
}

@property (nonatomic, readonly) NSData *extendedPANID;
@property (nonatomic, readonly) NSString *networkName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedPANID;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 extendedPANID:(id)arg2;
- (id)networkName;

@end
