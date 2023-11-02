
@interface RMLogItem : NSObject <NSCopying, NSSecureCoding> {
    id  _internalLogItem;
}

@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTimestamp:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;

@end
