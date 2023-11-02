
@interface CPButton : NSObject <CPControl, NSSecureCoding> {
    CPTemplate * _associatedTemplate;
    <CPControlDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    NSString * _title;
}

@property (nonatomic) CPTemplate *associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedTemplate;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 handler:(id /* block */)arg2;
- (bool)isEnabled;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSet:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
