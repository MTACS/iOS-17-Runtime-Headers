
@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult {
    NSDictionary * _failedObjectIDsToError;
    NSArray * _updatedObjectIDs;
}

@property (nonatomic, readonly) NSDictionary *failedObjectIDsToError;
@property (nonatomic, readonly) NSArray *updatedObjectIDs;

- (void)dealloc;
- (id)failedObjectIDsToError;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 success:(bool)arg3 madeChanges:(bool)arg4 updatedObjectIDs:(id)arg5 failedObjectIDToError:(id)arg6 error:(id)arg7;
- (id)updatedObjectIDs;

@end
