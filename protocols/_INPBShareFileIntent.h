
@protocol _INPBShareFileIntent <NSObject>

@required

+ (Class)entityNameType;
+ (Class)recipientsType;

- (int)StringAsShareMode:(NSString *)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearEntityNames;
- (void)clearRecipients;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (NSArray *)entityNames;
- (unsigned long long)entityNamesCount;
- (bool)hasIntentMetadata;
- (bool)hasShareMode;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)recipients;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setEntityNames:(NSArray *)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setShareMode:(int)arg1;
- (int)shareMode;
- (NSString *)shareModeAsString:(int)arg1;

@end
