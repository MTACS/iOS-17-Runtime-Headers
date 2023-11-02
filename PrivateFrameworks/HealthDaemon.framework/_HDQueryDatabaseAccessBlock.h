
@interface _HDQueryDatabaseAccessBlock : NSObject {
    id /* block */  _block;
    double  _creationTime;
    NSString * _processBundleIdentifier;
    long long  _qualityOfService;
    HDQueryServer * _queryServer;
}

- (void).cxx_destruct;
- (id)description;

@end
