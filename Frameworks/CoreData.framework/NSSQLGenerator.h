
@interface NSSQLGenerator : NSObject {
    NSSQLCore * _persistentStore;
}

+ (void)initialize;

- (id)initWithPersistentStore:(id)arg1;

@end
