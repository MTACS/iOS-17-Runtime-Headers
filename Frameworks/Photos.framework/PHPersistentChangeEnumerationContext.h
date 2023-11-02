
@interface PHPersistentChangeEnumerationContext : NSObject {
    NSMutableSet * _trashedIdentifiersAsDeletes;
    NSMutableSet * _untrashedIdentifiersAsInserts;
}

@property (nonatomic, readonly) NSMutableSet *trashedIdentifiersAsDeletes;
@property (nonatomic, readonly) NSMutableSet *untrashedIdentifiersAsInserts;

- (void).cxx_destruct;
- (id)init;
- (id)trashedIdentifiersAsDeletes;
- (id)untrashedIdentifiersAsInserts;

@end
