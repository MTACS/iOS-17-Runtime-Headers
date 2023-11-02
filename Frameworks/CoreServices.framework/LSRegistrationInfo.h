
@interface LSRegistrationInfo : NSObject <NSMutableCopying, NSSecureCoding> {
    unsigned int  action;
    unsigned int  bundleClass;
    unsigned int  bundleUnit;
    unsigned int  containerUnit;
    double  contentModDate;
    double  executableModDate;
    unsigned long long  inoBundle;
    unsigned long long  inoExec;
    unsigned int  itemFlags;
    unsigned int  options;
    unsigned int  version;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
