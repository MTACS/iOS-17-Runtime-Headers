
@interface PKApplicationMessageContentDefault : PKApplicationMessageContent <NSSecureCoding> {
    NSString * _body;
    PKApplicationMessageIcon * _icon;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) PKApplicationMessageIcon *icon;
@property (nonatomic, readonly) NSString *title;

+ (id)createWithGroup:(id)arg1 action:(id)arg2 icon:(id)arg3 title:(id)arg4 body:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)title;

@end
