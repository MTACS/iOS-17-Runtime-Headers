
@interface CPInformationItem : NSObject <NSSecureCoding> {
    NSString * _detail;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *detail;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 detail:(id)arg2;
- (id)title;

@end
