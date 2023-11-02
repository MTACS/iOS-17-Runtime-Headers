
@interface ICThumbnailGenerator : NSObject {
    NSManagedObjectContext * _managedObjectContext;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (void)generateThumbnailWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)managedObjectContext;

@end
