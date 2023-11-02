
@interface TVRCKeyboardState : NSObject <NSSecureCoding> {
    TVRCKeyboardAttributes * _attributes;
    bool  _isEditing;
    NSString * _text;
}

@property (nonatomic, copy) TVRCKeyboardAttributes *attributes;
@property (nonatomic) bool isEditing;
@property (nonatomic, copy) NSString *text;

+ (id)keyboardStateFromDevice:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isEditing;
- (void)setAttributes:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
