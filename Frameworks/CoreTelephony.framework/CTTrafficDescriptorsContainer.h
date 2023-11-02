
@interface CTTrafficDescriptorsContainer : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _trafficDescriptors;
}

@property (nonatomic, retain) NSArray *trafficDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTrafficDescriptors:(id)arg1;
- (id)trafficDescriptors;

@end
