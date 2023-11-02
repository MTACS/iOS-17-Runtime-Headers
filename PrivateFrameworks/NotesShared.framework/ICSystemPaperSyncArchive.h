
@interface ICSystemPaperSyncArchive : NSObject {
    void assetArchives;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  databaseArchive;
}

@property (nonatomic, readonly) NSArray *assetArchives;
@property (nonatomic, readonly) NSURL *databaseArchive;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)assetArchives;
- (id)databaseArchive;
- (id)description;
- (id)init;
- (id)initWithDatabaseArchive:(id)arg1 assetArchives:(id)arg2;

@end
