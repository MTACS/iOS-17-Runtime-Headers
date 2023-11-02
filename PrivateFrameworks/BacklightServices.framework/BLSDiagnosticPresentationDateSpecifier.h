
@interface BLSDiagnosticPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying, BSXPCCoding, NSSecureCoding> {
    NSDate * _presentationDate;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *presentationDate;
@property (nonatomic, readonly) NSArray *specifiers;
@property (readonly) Class superclass;

+ (id)createWithSpecifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentationDate:(id)arg1 specifiers:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentationDate;
- (id)specifiers;

@end
