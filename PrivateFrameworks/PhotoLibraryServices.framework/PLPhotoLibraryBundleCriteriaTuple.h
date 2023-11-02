
@interface PLPhotoLibraryBundleCriteriaTuple : NSObject {
    PLPhotoLibraryBundle * _bundle;
    PLBackgroundJobCriteria * _criteria;
}

@property (nonatomic, readonly) PLPhotoLibraryBundle *bundle;
@property (nonatomic, readonly) PLBackgroundJobCriteria *criteria;

- (void).cxx_destruct;
- (id)bundle;
- (id)criteria;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundle:(id)arg1 withCriteria:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
