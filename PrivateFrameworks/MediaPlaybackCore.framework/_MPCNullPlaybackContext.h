
@interface _MPCNullPlaybackContext : MPPlaybackContext {
    NSString * _label;
}

@property (nonatomic, copy) NSString *label;

+ (Class)queueFeederClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end
