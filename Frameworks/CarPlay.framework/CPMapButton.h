
@interface CPMapButton : NSObject <CPControl, NSSecureCoding> {
    <CPMapButtonDelegate> * _controlDelegate;
    bool  _enabled;
    UIImage * _focusedImage;
    id /* block */  _handler;
    bool  _hidden;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
}

@property (nonatomic) <CPMapButtonDelegate> *controlDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *focusedImage;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)controlDelegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)focusedImage;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)isEnabled;
- (bool)isHidden;
- (void)setControlDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFocusedImage:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSet:(id)arg1;

@end
