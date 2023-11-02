
@interface ABDowntimeWhitelistMigrator : NSObject

+ (id)externalRepresentationFromUnknownProperties:(id)arg1;
+ (bool)moveDowntimeWhitelistFromUnknownProperties:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; void *x5; int (*x6)(); int (*x7)(); void *x8; unsigned int x9; bool x10; }*)arg1;
+ (id)unknownPropertiesFromExternalRepresentation:(id)arg1;

@end
