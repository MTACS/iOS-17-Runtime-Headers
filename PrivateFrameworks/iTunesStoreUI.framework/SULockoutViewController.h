
@interface SULockoutViewController : SUViewController {
    UIImage * _image;
    NSBundle * _localizationBundle;
    NSString * _messageBody;
    NSString * _messageTitle;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSBundle *localizationBundle;
@property (nonatomic, retain) NSString *messageBody;
@property (nonatomic, retain) NSString *messageTitle;

- (id)copyArchivableContext;
- (void)dealloc;
- (id)image;
- (id)init;
- (void)loadView;
- (id)localizationBundle;
- (id)messageBody;
- (id)messageTitle;
- (void)setImage:(id)arg1;
- (void)setLocalizationBundle:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageTitle:(id)arg1;

@end
