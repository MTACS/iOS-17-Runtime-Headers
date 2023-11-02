
@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {
    NSDictionary * _objectIDToLastExportedToken;
}

@property (nonatomic, readonly) NSDictionary *objectIDToLastExportedToken;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 objectIDToLastExportedToken:(id)arg3 error:(id)arg4;
- (id)objectIDToLastExportedToken;

@end
