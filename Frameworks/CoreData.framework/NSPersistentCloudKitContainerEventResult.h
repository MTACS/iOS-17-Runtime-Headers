
@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult {
    id  _result;
    long long  _resultType;
}

@property (readonly) id result;
@property (readonly) long long resultType;

- (void)dealloc;
- (id)initWithResult:(id)arg1 ofType:(long long)arg2;
- (id)initWithSubresults:(id)arg1;
- (id)result;
- (long long)resultType;

@end
