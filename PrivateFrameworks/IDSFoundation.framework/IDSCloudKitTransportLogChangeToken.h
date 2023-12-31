
@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding> {
    IDSCKServerChangeToken * _ckToken;
}

@property (nonatomic, retain) IDSCKServerChangeToken *ckToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCKToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCkToken:(id)arg1;

@end
