
@interface EKRecurrenceIdentifier : NSObject <NSCopying> {
    NSString * _identifierString;
    NSString * _localUID;
    NSDate * _recurrenceDate;
}

@property (nonatomic, retain) NSString *identifierString;
@property (retain) NSString *localUID;
@property (retain) NSDate *recurrenceDate;

+ (const char *)_dateFormatStripTime:(bool)arg1 stripTimeZone:(bool)arg2;
+ (id)_recurrenceIdentifierWithRecurrenceDate:(id)arg1 localUID:(id)arg2 stripTime:(bool)arg3 stripTimeZone:(bool)arg4;
+ (id)_recurrenceStringForDate:(id)arg1 stripTime:(bool)arg2 stripTimeZone:(bool)arg3;
+ (bool)_splitIdentifier:(id)arg1 intoLocalUID:(id*)arg2 recurrenceDate:(id*)arg3;
+ (id)localUIDForIdentifierString:(id)arg1;
+ (id)recurrenceIdentifierWithLocalUID:(id)arg1 recurrenceDate:(id)arg2;
+ (id)recurrenceIdentifierWithString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifierString;
- (bool)isEqual:(id)arg1;
- (id)localUID;
- (id)recurrenceDate;
- (void)setIdentifierString:(id)arg1;
- (void)setLocalUID:(id)arg1;
- (void)setRecurrenceDate:(id)arg1;

@end
