
@interface BLRestoreResponseItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _downloadID;
    NSError * _error;
    NSNumber * _storeItemID;
}

@property (nonatomic, copy) NSString *downloadID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *storeItemID;
@property (nonatomic, readonly) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadID;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreItemID:(id)arg1 downloadID:(id)arg2 error:(id)arg3;
- (void)setDownloadID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStoreItemID:(id)arg1;
- (id)storeItemID;
- (bool)success;

@end
