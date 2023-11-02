
@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest {
    NSSet * _objectIDsToFetch;
}

@property (nonatomic, copy) NSSet *objectIDsToFetch;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)objectIDsToFetch;
- (void)setObjectIDsToFetch:(id)arg1;

@end
