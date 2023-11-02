
@interface EDAMAccountLimits : FATObject {
    NSNumber * _noteResourceCountMax;
    NSNumber * _noteSizeMax;
    NSNumber * _noteTagCountMax;
    NSNumber * _resourceSizeMax;
    NSNumber * _uploadLimit;
    NSNumber * _userAdvertisedDeviceLimit;
    NSNumber * _userDeviceLimit;
    NSNumber * _userLinkedNotebookMax;
    NSNumber * _userMailLimitDaily;
    NSNumber * _userNoteCountMax;
    NSNumber * _userNotebookCountMax;
    NSNumber * _userSavedSearchesMax;
    NSNumber * _userTagCountMax;
}

@property (nonatomic, retain) NSNumber *noteResourceCountMax;
@property (nonatomic, retain) NSNumber *noteSizeMax;
@property (nonatomic, retain) NSNumber *noteTagCountMax;
@property (nonatomic, retain) NSNumber *resourceSizeMax;
@property (nonatomic, retain) NSNumber *uploadLimit;
@property (nonatomic, retain) NSNumber *userAdvertisedDeviceLimit;
@property (nonatomic, retain) NSNumber *userDeviceLimit;
@property (nonatomic, retain) NSNumber *userLinkedNotebookMax;
@property (nonatomic, retain) NSNumber *userMailLimitDaily;
@property (nonatomic, retain) NSNumber *userNoteCountMax;
@property (nonatomic, retain) NSNumber *userNotebookCountMax;
@property (nonatomic, retain) NSNumber *userSavedSearchesMax;
@property (nonatomic, retain) NSNumber *userTagCountMax;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noteResourceCountMax;
- (id)noteSizeMax;
- (id)noteTagCountMax;
- (id)resourceSizeMax;
- (void)setNoteResourceCountMax:(id)arg1;
- (void)setNoteSizeMax:(id)arg1;
- (void)setNoteTagCountMax:(id)arg1;
- (void)setResourceSizeMax:(id)arg1;
- (void)setUploadLimit:(id)arg1;
- (void)setUserAdvertisedDeviceLimit:(id)arg1;
- (void)setUserDeviceLimit:(id)arg1;
- (void)setUserLinkedNotebookMax:(id)arg1;
- (void)setUserMailLimitDaily:(id)arg1;
- (void)setUserNoteCountMax:(id)arg1;
- (void)setUserNotebookCountMax:(id)arg1;
- (void)setUserSavedSearchesMax:(id)arg1;
- (void)setUserTagCountMax:(id)arg1;
- (id)uploadLimit;
- (id)userAdvertisedDeviceLimit;
- (id)userDeviceLimit;
- (id)userLinkedNotebookMax;
- (id)userMailLimitDaily;
- (id)userNoteCountMax;
- (id)userNotebookCountMax;
- (id)userSavedSearchesMax;
- (id)userTagCountMax;

@end
