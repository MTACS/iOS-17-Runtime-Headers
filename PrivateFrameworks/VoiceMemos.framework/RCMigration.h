
@interface RCMigration : NSManagedObject

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSNumber *flags;
@property (nonatomic, readonly) bool hasEncryptedFields;
@property (nonatomic, readonly) NSString *jsonDescription;
@property (nonatomic) unsigned long long migrationFlags;
@property (nonatomic, readonly) int migrationReason;

+ (id)createEncryptedFieldsMigration:(int)arg1 context:(id)arg2;

- (id)_descriptionDictionary;
- (id)_initWithFlags:(unsigned long long)arg1 context:(id)arg2;
- (id)description;
- (bool)hasEncryptedFields;
- (id)jsonDescription;
- (unsigned long long)migrationFlags;
- (int)migrationReason;
- (void)setHasEncryptedFields:(bool)arg1;
- (void)setMigrationFlags:(unsigned long long)arg1;

@end
