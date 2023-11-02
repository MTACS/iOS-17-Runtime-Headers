
@interface CNAvatarPosterCarouselEditingContext : NSObject {
    CNContactImage * _existingAvatar;
    CNContactPoster * _existingPoster;
    bool  _isEditingExisting;
    CNContactImage * _updatedAvatar;
    CNContactPoster * _updatedPoster;
}

@property (nonatomic, retain) CNContactImage *existingAvatar;
@property (nonatomic, retain) CNContactPoster *existingPoster;
@property (nonatomic, readonly) bool isEditingExisting;
@property (nonatomic, retain) CNContactImage *updatedAvatar;
@property (nonatomic, retain) CNContactPoster *updatedPoster;

+ (id)contextForCreateNew;
+ (id)contextWithExistingPoster:(id)arg1 existingAvatar:(id)arg2;

- (void).cxx_destruct;
- (id)existingAvatar;
- (id)existingPoster;
- (id)initWithExistingPoster:(id)arg1 existingAvatar:(id)arg2;
- (bool)isEditingExisting;
- (void)setExistingAvatar:(id)arg1;
- (void)setExistingPoster:(id)arg1;
- (void)setUpdatedAvatar:(id)arg1;
- (void)setUpdatedPoster:(id)arg1;
- (id)updatedAvatar;
- (id)updatedPoster;

@end
