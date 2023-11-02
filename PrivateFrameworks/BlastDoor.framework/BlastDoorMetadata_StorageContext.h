
@interface BlastDoorMetadata_StorageContext : NSObject {
    void metadata_StorageContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isFromStorage;
@property (nonatomic, readonly) bool isLastFromStorage;

- (id)description;
- (id)init;
- (bool)isFromStorage;
- (bool)isLastFromStorage;

@end
