
@interface IMAbstractDatabaseArchiver : NSObject {
    NSString * _destinationPath;
    NSString * _sourcePath;
}

@property (nonatomic, readonly) NSString *destinationPath;
@property (nonatomic, readonly) NSString *sourcePath;

- (bool)copyDatabase:(id /* block */)arg1;
- (void)dealloc;
- (bool)deleteFailedArchiveAtPath:(id)arg1 error:(id*)arg2;
- (id)destinationPath;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2;
- (id)sourcePath;

@end
