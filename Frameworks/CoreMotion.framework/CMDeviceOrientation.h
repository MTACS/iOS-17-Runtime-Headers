
@interface CMDeviceOrientation : CMLogItem {
    int  fOrientation;
}

@property (nonatomic, readonly) int orientation;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2;
- (int)orientation;

@end
