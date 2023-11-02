
@interface DACActivityListEntry : NSObject <NSCopying, NSSecureCoding> {
    DACActivityDescriptor * _activity;
    DACChangeMarker * _changeMarker;
    NSDate * _date;
    DACActivityDescriptor * _origin;
    unsigned long long  _reason;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
