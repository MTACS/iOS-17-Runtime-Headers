
@interface CTNetwork : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _plmn;
    NSString * _rat;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *plmn;
@property (nonatomic, retain) NSString *rat;
@property (nonatomic, readonly, copy) NSString *tps_localizedName;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)plmn;
- (id)rat;
- (void)setName:(id)arg1;
- (void)setPlmn:(id)arg1;
- (void)setRat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

- (id)tps_localizedName;

@end
