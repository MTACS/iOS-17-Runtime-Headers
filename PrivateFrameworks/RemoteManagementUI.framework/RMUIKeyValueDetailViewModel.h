
@interface RMUIKeyValueDetailViewModel : NSObject <NSSecureCoding> {
    NSString * _title;
    NSString * _value;
    NSString * _viewID;
}

@property (retain) NSString *title;
@property (retain) NSString *value;
@property (readonly) NSString *viewID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;
- (id)viewID;

@end
