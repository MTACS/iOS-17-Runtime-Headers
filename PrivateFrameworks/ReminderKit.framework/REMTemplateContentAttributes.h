
@interface REMTemplateContentAttributes : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasDisplayDate;
    bool  _hasHashtags;
    bool  _hasImageAttachments;
    bool  _hasLocationTriggersOrVehicleEventTriggers;
    long long  _reminderCount;
}

@property (nonatomic, readonly) bool hasDisplayDate;
@property (nonatomic, readonly) bool hasHashtags;
@property (nonatomic, readonly) bool hasImageAttachments;
@property (nonatomic, readonly) bool hasLocationTriggersOrVehicleEventTriggers;
@property (nonatomic, readonly) long long reminderCount;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDisplayDate;
- (bool)hasHashtags;
- (bool)hasImageAttachments;
- (bool)hasLocationTriggersOrVehicleEventTriggers;
- (id)initWithCoder:(id)arg1;
- (id)initWithReminderCount:(long long)arg1 hasDisplayDate:(bool)arg2 hasHashtags:(bool)arg3 hasLocationTriggersOrVehicleEventTriggers:(bool)arg4 hasImageAttachments:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (long long)reminderCount;

@end
