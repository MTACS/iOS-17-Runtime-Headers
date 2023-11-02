
@interface TRISQLiteCKContainer : NSObject {
    NSString * _containerIdentifier;
    TRISQLiteCKDatabase * _database;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly) CKDatabase *privateCloudDatabase;
@property (nonatomic, readonly) CKDatabase *publicCloudDatabase;
@property (nonatomic, readonly) CKDatabase *sharedCloudDatabase;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1 database:(id)arg2;
- (id)privateCloudDatabase;
- (id)publicCloudDatabase;
- (id)sharedCloudDatabase;

@end
