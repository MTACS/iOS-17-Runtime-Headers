
@interface RMUIInteractiveProfileErrorViewModel : NSObject <NSSecureCoding> {
    NSError * _error;
    NSString * _message;
    NSString * _okText;
    NSString * _title;
}

@property (retain) NSError *error;
@property (retain) NSString *message;
@property (retain) NSString *okText;
@property (retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 isActivating:(bool)arg2;
- (id)message;
- (id)okText;
- (void)setError:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOkText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
