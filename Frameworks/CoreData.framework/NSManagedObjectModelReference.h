
@interface NSManagedObjectModelReference : NSObject {
    NSBundle * _bundle;
    NSDictionary * _entityVersionHashes;
    NSURL * _fileURL;
    NSManagedObjectModel * _model;
    NSString * _modelName;
    NSManagedObjectModel * _resolvedModel;
    NSString * _versionChecksum;
}

@property (retain) NSBundle *bundle;
@property (retain) NSDictionary *entityVersionHashes;
@property (retain) NSURL *fileURL;
@property (retain) NSManagedObjectModel *model;
@property (retain) NSString *modelName;
@property (readonly) NSManagedObjectModel *resolvedModel;
@property (readonly) NSString *versionChecksum;

- (id)bundle;
- (void)dealloc;
- (id)entityVersionHashes;
- (id)fileURL;
- (id)initWithEntityVersionHashes:(id)arg1 inBundle:(id)arg2 versionChecksum:(id)arg3;
- (id)initWithFileURL:(id)arg1 versionChecksum:(id)arg2;
- (id)initWithModel:(id)arg1 versionChecksum:(id)arg2;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 versionChecksum:(id)arg3;
- (id)model;
- (id)modelName;
- (bool)resolve:(id*)arg1;
- (id)resolvedModel;
- (void)setBundle:(id)arg1;
- (void)setEntityVersionHashes:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)unresolve;
- (id)versionChecksum;

@end
