
@interface FIFolderSize : NSObject {
    long long  _compressionAdjustedLogicalBytes;
    NSError * _error;
    long long  _folderCount;
    long long  _logicalBytes;
    long long  _physicalBytes;
    long long  _skippedItemCount;
    long long  _totalItems;
    long long  _userVisibleItems;
}

@property (nonatomic, readonly) long long compressionAdjustedLogicalBytes;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long folderCount;
@property (nonatomic, readonly) long long logicalBytes;
@property (nonatomic, readonly) long long physicalBytes;
@property (nonatomic, readonly) long long skippedItemCount;
@property (nonatomic, readonly) long long totalItems;
@property (nonatomic, readonly) long long userVisibleItems;

- (void).cxx_destruct;
- (long long)compressionAdjustedLogicalBytes;
- (id)error;
- (long long)folderCount;
- (long long)logicalBytes;
- (long long)physicalBytes;
- (long long)skippedItemCount;
- (long long)totalItems;
- (long long)userVisibleItems;

@end
