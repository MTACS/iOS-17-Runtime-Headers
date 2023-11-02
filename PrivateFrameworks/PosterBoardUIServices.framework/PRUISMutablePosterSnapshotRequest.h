
@interface PRUISMutablePosterSnapshotRequest : PRUISPosterSnapshotRequest

@property (nonatomic, retain) PRUISPosterAttachmentConfiguration *attachmentConfiguration;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, retain) PRPosterSnapshotDefinition *definition;
@property (nonatomic) bool determineColorStatistics;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) UIScreen *screen;
@property (nonatomic) double timeout;
@property (nonatomic) long long userInterfaceStyle;

- (void)appendAttachment:(id)arg1;

@end
