
@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem * _listChange;
}

+ (Class)meltedClass;

- (void).cxx_destruct;
- (id)REMColorFromEKHexColorString:(id)arg1;
- (id)UUID;
- (id)_account;
- (bool)_applyChanges:(id)arg1 error:(id*)arg2;
- (bool)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2;
- (id)_list;
- (id)allAlarms;
- (int)allowedEntities;
- (id)calendarIdentifier;
- (id)colorStringRaw;
- (int)displayOrder;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)arg1;
- (id)externalID;
- (int)flags;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)arg1;
- (id)image;
- (id)initNewListInStore:(id)arg1;
- (bool)isColorDisplayOnly;
- (bool)isPublished;
- (id)publishURLString;
- (id)remObjectID;
- (id)sharedOwnerName;
- (id)sharees;
- (unsigned long long)sharingStatus;
- (id)source;
- (id)symbolicColorName;
- (id)syncError;
- (id)title;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (id)updateListWithSaveRequest:(id)arg1 error:(id*)arg2;

@end
