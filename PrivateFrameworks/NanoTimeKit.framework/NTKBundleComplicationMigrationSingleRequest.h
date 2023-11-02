
@interface NTKBundleComplicationMigrationSingleRequest : NTKBundleComplicationMigrationRequest <NSCopying, NSSecureCoding> {
    NTKComplication * _complication;
    CLKDevice * _device;
    long long  _family;
}

@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) long long family;

+ (id)requestWithComplication:(id)arg1 family:(long long)arg2 device:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
