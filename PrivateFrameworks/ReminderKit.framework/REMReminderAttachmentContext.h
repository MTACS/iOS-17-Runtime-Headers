
@interface REMReminderAttachmentContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *fileAttachments;
@property (nonatomic, readonly) NSArray *imageAttachments;
@property (nonatomic, retain) REMReminder *reminder;
@property (nonatomic, readonly) NSArray *urlAttachments;

- (void).cxx_destruct;
- (id)attachments;
- (id)attachmentsOfClass:(Class)arg1;
- (id)fileAttachments;
- (id)imageAttachments;
- (id)initWithReminder:(id)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;
- (id)urlAttachments;

@end
