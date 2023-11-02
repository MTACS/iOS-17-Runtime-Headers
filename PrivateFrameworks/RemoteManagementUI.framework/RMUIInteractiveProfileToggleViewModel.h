
@interface RMUIInteractiveProfileToggleViewModel : NSObject <NSSecureCoding> {
    NSString * _title;
    bool  _toggleState;
}

@property (retain) NSString *title;
@property bool toggleState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToggleState:(bool)arg1;
- (id)title;
- (bool)toggleState;

@end
