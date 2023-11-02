
@protocol WOPersistableObject

@required

+ (id)deserializeFromPersistence:(WOPersistence *)arg1;

- (WOPersistence *)serialize;

@end
