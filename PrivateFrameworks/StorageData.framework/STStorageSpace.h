
@interface STStorageSpace : NSObject {
    long long  _availableBytes;
    long long  _freeBytes;
    bool  _isLowSpace;
    bool  _isVeryLowSpace;
    long long  _purgeableBytes;
    long long  _totalBytes;
    long long  _usedBytes;
}

@property (readonly) long long availableBytes;
@property (readonly) long long freeBytes;
@property (readonly) bool isLowSpace;
@property (readonly) bool isVeryLowSpace;
@property (readonly) long long purgeableBytes;
@property (readonly) long long totalBytes;
@property (readonly) long long usedBytes;

- (long long)availableBytes;
- (long long)freeBytes;
- (id)initWithTotal:(long long)arg1 free:(long long)arg2 purgeable:(long long)arg3;
- (bool)isLowSpace;
- (bool)isVeryLowSpace;
- (long long)purgeableBytes;
- (long long)totalBytes;
- (long long)usedBytes;

@end
