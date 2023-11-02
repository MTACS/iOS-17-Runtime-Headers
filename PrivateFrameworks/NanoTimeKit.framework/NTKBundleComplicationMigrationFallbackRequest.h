
@interface NTKBundleComplicationMigrationFallbackRequest : NTKBundleComplicationMigrationRequest <NSCopying, NSSecureCoding> {
    NTKComplication * _complication;
    CLKDevice * _device;
    NSArray * _families;
}

@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NSArray *families;

+ (id)requestWithComplication:(id)arg1 families:(id)arg2 device:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)families;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
