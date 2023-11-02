
@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    unsigned long long  _entityType;
}

- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)eligibleCalendars;
- (id)init;
- (id)initWithEntityType:(unsigned long long)arg1;
- (id)popupMenu:(id)arg1;
- (bool)requiresReconfigurationOnSave;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
