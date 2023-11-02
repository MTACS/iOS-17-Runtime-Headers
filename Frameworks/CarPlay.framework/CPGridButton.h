
@interface CPGridButton : NSObject <CPControl, NSSecureCoding> {
    <CPControlDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    NSArray * _titleVariants;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGridButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageSet:(id)arg1;
- (id)titleVariants;

@end
