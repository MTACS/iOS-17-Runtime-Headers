
@interface PBFDataStoreArchiveMetadata : NSObject {
    NSString * _archiveName;
    NSURL * _archiveURL;
    NSDate * _creationDate;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *archiveName;
@property (nonatomic, readonly) NSURL *archiveURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)archiveName;
- (id)archiveURL;
- (id)creationDate;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)version;

@end
