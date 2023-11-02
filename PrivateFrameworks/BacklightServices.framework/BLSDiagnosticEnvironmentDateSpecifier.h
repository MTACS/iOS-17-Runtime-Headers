
@interface BLSDiagnosticEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying, BSXPCCoding, NSSecureCoding> {
    BLSAlwaysOnDateSpecifier * _dateSpecifier;
    NSString * _environmentIdentifier;
}

@property (nonatomic, readonly) BLSAlwaysOnDateSpecifier *dateSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *environmentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithSpecifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSpecifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)environmentIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateSpecifier:(id)arg1 environmentIdentifier:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
