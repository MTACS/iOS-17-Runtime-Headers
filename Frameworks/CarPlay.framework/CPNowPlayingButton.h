
@interface CPNowPlayingButton : NSObject <CPControl, NSSecureCoding> {
    <CPControlDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    bool  _selected;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)isEnabled;
- (bool)isSelected;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
