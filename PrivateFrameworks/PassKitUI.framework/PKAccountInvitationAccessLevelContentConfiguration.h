
@interface PKAccountInvitationAccessLevelContentConfiguration : NSObject <UIContentConfiguration> {
    UIImage * _image;
    NSString * _secondarySubtitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *secondarySubtitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithAccessLevelOption:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountInvitationAccessLevelContentConfiguration:(id)arg1;
- (id)makeContentView;
- (id)secondarySubtitle;
- (id)subtitle;
- (id)title;
- (id)updatedConfigurationForState:(id)arg1;

@end
