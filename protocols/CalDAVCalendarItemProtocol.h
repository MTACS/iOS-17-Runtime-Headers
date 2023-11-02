
@protocol CalDAVCalendarItemProtocol

@required

- (CalDAVUpdateOwnerItem *)createdBy;
- (CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
- (NSString *)scheduleTag;
- (void)setCreatedBy:(CalDAVUpdateOwnerItem *)arg1;
- (void)setScheduleChanges:(CalDAVCalendarServerScheduleChangesItem *)arg1;
- (void)setScheduleTag:(NSString *)arg1;
- (void)setUpdatedBy:(CalDAVUpdateOwnerItem *)arg1;
- (CalDAVUpdateOwnerItem *)updatedBy;

@end
