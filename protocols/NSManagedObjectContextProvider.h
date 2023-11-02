
@protocol NSManagedObjectContextProvider <NSObject>

@required

- (MTManagedObjectContext *)carPlayContext;
- (NSManagedObjectContext *)contextForName:(NSString *)arg1;
- (MTManagedObjectContext *)importContext;
- (MTManagedObjectContext *)loggingContext;
- (MTManagedObjectContext *)mainOrPrivateContext;
- (MTManagedObjectContext *)mainQueueContext;
- (MTManagedObjectContext *)playbackContext;
- (MTManagedObjectContext *)privateQueueContext;
- (MTManagedObjectContext *)resetableImportContext;
- (MTManagedObjectContext *)storeContext;

@end
