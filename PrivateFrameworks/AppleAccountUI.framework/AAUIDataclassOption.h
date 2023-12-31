
@interface AAUIDataclassOption : NSObject <NSCoding, NSSecureCoding> {
    bool  _editable;
    bool  _enabled;
}

@property (getter=isEditable, nonatomic) bool editable;
@property (getter=isEnabled, nonatomic) bool enabled;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isEnabled;
- (void)setEditable:(bool)arg1;
- (void)setEnabled:(bool)arg1;

@end
