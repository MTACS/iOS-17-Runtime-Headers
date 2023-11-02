
@interface BLSAlwaysOnDateSpecifier : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSDate * _date;
    long long  _fidelity;
    id  _userObject;
}

@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fidelity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userObject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)fidelity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 fidelity:(long long)arg2;
- (id)initWithDate:(id)arg1 fidelity:(long long)arg2 userObject:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newSpecifierWithMaxFidelity:(long long)arg1;
- (id)userObject;

@end
