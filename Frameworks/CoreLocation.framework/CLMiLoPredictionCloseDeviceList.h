
@interface CLMiLoPredictionCloseDeviceList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _devices;
}

@property (nonatomic, readonly) NSArray *devices;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCloseDeviceList:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
