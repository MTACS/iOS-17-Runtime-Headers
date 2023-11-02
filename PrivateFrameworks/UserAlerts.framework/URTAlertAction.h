
@interface URTAlertAction : NSObject <NSSecureCoding> {
    id /* block */  _handler;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)title;

@end
