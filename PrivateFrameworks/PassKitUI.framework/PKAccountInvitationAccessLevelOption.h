
@interface PKAccountInvitationAccessLevelOption : NSObject {
    unsigned long long  _accessLevel;
    UIImage * _image;
    NSString * _secondarySubtitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long accessLevel;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *secondarySubtitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)accessLevel;
- (id)image;
- (id)initWithAccessLevel:(unsigned long long)arg1;
- (id)secondarySubtitle;
- (void)setImage:(id)arg1;
- (void)setSecondarySubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
