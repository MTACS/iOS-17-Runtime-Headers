
@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientBundleId;
    unsigned short  _option;
    NSString * _suggestedDestinationName;
}

@property (readonly) NSString *clientBundleId;
@property unsigned short option;
@property (copy) NSString *suggestedDestinationName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPMSOption:(unsigned short)arg1;
- (id)nameForOption:(unsigned short)arg1;
- (unsigned short)option;
- (void)setOption:(unsigned short)arg1;
- (void)setSuggestedDestinationName:(id)arg1;
- (id)suggestedDestinationName;

@end
