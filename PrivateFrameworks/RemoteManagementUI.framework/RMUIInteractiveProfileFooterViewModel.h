
@interface RMUIInteractiveProfileFooterViewModel : NSObject <NSSecureCoding> {
    NSString * _title;
}

@property (retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
