
@interface PGOnDiskManager : PGManager

+ (Class)graphClass;

- (void)closePersistentStore;
- (bool)requiresReadOnly;

@end
