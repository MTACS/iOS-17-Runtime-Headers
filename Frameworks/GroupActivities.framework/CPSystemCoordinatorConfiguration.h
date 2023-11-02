
@interface CPSystemCoordinatorConfiguration : NSObject <NSSecureCoding> {
    void isObservingGroupImmersionStyle;
    void spatialTemplatePreference;
    void supportsGroupImmersiveSpace;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
