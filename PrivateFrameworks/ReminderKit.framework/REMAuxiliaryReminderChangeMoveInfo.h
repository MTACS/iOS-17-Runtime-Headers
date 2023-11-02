
@interface REMAuxiliaryReminderChangeMoveInfo : REMAuxiliaryChangeInfoType <REMAuxiliaryReminderChangeInfo>

@property (nonatomic, readonly) NSString *oldExternalIdentifier;
@property (nonatomic, readonly) NSString *oldListIdentifier;
@property (nonatomic, readonly) NSString *reminderIdentifier;

+ (id)cdEntityName;

@end
