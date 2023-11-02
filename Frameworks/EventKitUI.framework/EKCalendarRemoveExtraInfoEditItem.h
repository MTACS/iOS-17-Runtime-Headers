
@interface EKCalendarRemoveExtraInfoEditItem : EKCalendarEditItem

- (void)_stripAlertsChanged:(id)arg1;
- (void)_stripAttachmentsChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)footerTitle;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;

@end
