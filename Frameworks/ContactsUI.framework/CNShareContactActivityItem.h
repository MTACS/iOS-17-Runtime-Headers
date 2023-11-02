
@interface CNShareContactActivityItem : NSObject <UIActivityItemLinkPresentationSource, UIActivityItemSource, UIActivityItemSourceAttachment> {
    bool  _canShareMeCardOnlySharingProperties;
    bool  _canSharePronouns;
    CNContactFormatter * _contactFormatter;
    NSArray * _contacts;
    LPFileMetadata * _fileMetadata;
    NSString * _groupName;
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic) bool canShareMeCardOnlySharingProperties;
@property (nonatomic) bool canSharePronouns;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) LPFileMetadata *fileMetadata;
@property (nonatomic, retain) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (bool)canShareMeCardOnlySharingProperties;
- (bool)canSharePronouns;
- (id)contactFormatter;
- (id)contacts;
- (id)displayString;
- (id)fileMetadata;
- (id)groupName;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1 inGroupNamed:(id)arg2;
- (id)linkMetadata;
- (void)setCanShareMeCardOnlySharingProperties:(bool)arg1;
- (void)setCanSharePronouns:(bool)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setFileMetadata:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (id)thumbnailImage;

@end
