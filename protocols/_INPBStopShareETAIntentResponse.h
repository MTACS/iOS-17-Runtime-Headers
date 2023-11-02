
@protocol _INPBStopShareETAIntentResponse <NSObject>

@required

+ (Class)recipientType;

- (int)StringAsMediums:(NSString *)arg1;
- (void)addMedium:(int)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearMediums;
- (void)clearRecipients;
- (int)mediumAtIndex:(unsigned long long)arg1;
- (int*)mediums;
- (NSString *)mediumsAsString:(int)arg1;
- (unsigned long long)mediumsCount;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (NSArray *)recipients;
- (unsigned long long)recipientsCount;
- (void)setMediums:(int*)arg1 count:(unsigned long long)arg2;
- (void)setRecipients:(NSArray *)arg1;

@end
