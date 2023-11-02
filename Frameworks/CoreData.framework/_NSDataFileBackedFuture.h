
@interface _NSDataFileBackedFuture : NSData <NSSecureCoding, _NSFileBackedFuture> {
    NSData * _bytes;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    NSURL * _originalFileURL;
    NSData * _realData;
    NSUUID * _uuid;
}

@property (readonly) NSUUID *UUID;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSURL *fileURL;

+ (Class)classForKeyedUnarchiver;
+ (bool)supportsSecureCoding;

- (id)UUID;
- (unsigned long long)_bytesLengthForStore;
- (void*)_bytesPtrForStore;
- (void)_copyToInterimLocation;
- (bool)_isCloudKitSupportOriginated;
- (void)_moveToPermanentLocation;
- (const void*)bytes;
- (Class)classForCoder;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;

@end
