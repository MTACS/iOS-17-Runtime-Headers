
@interface THThreadNetworkBorderAgent : NSObject <NSSecureCoding> {
    NSData * _discriminatorId;
}

@property (nonatomic, readonly) NSData *discriminatorId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)discriminatorId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBaDiscrId:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
