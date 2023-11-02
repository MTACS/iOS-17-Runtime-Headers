
@interface CPDashboardButton : NSObject <CPControl, NSSecureCoding> {
    <CPControlDelegate> * _delegate;
    id /* block */  _handler;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    NSArray * _subtitleVariants;
    NSArray * _titleVariants;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (nonatomic, readonly) NSArray *subtitleVariants;
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
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 handler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageSet:(id)arg1;
- (id)subtitleVariants;
- (id)titleVariants;

@end
