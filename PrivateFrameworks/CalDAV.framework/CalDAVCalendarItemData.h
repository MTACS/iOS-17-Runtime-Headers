
@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {
    CalDAVUpdateOwnerItem * _createdBy;
    CalDAVCalendarServerScheduleChangesItem * _scheduleChanges;
    NSString * _scheduleTag;
    CalDAVUpdateOwnerItem * _updatedBy;
}

@property (nonatomic, retain) CalDAVUpdateOwnerItem *createdBy;
@property (nonatomic, retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (nonatomic, retain) NSString *scheduleTag;
@property (nonatomic, retain) CalDAVUpdateOwnerItem *updatedBy;

- (void).cxx_destruct;
- (id)createdBy;
- (id)scheduleChanges;
- (id)scheduleTag;
- (void)setCreatedBy:(id)arg1;
- (void)setScheduleChanges:(id)arg1;
- (void)setScheduleTag:(id)arg1;
- (void)setUpdatedBy:(id)arg1;
- (id)updatedBy;

@end
