
@interface SUScanResults : NSObject <NSCopying, NSSecureCoding> {
    SUDescriptor * _alternateDescriptor;
    SUDescriptor * _preferredDescriptor;
}

@property (nonatomic, retain) SUDescriptor *alternateDescriptor;
@property (nonatomic, retain) SUDescriptor *preferredDescriptor;

+ (bool)supportsSecureCoding;

- (id)alternateDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredDescriptor:(id)arg1 alternateDescriptor:(id)arg2;
- (id)latestUpdate;
- (id)preferredDescriptor;
- (void)setAlternateDescriptor:(id)arg1;
- (void)setPreferredDescriptor:(id)arg1;

@end
