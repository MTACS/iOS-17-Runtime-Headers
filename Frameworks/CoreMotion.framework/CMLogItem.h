
@interface CMLogItem : NSObject <NSCopying, NSSecureCoding> {
    id  _internalLogItem;
}

@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (double)timestamp;

@end
