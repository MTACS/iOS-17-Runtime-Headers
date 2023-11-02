
@interface CPTextButton : NSObject <CPControl, NSSecureCoding> {
    <CPControlDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    long long  _textStyle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (readonly) Class superclass;
@property (nonatomic) long long textStyle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 textStyle:(long long)arg2 handler:(id /* block */)arg3;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTextStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)textStyle;
- (id)title;

@end
