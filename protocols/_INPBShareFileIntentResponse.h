
@protocol _INPBShareFileIntentResponse <NSObject>

@required

+ (Class)recipientsType;

- (int)StringAsShareMode:(NSString *)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
- (bool)confirm;
- (bool)hasConfirm;
- (bool)hasShareMode;
- (bool)hasSuccess;
- (NSArray *)recipients;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setShareMode:(int)arg1;
- (void)setSuccess:(bool)arg1;
- (int)shareMode;
- (NSString *)shareModeAsString:(int)arg1;
- (bool)success;

@end
