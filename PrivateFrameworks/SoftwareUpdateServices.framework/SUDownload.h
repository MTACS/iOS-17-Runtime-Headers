
@interface SUDownload : NSObject <NSCopying, NSSecureCoding> {
    SUDescriptor * _descriptor;
    SUDownloadOptions * _downloadOptions;
    SUDownloadMetadata * _metadata;
    SUOperationProgress * _progress;
}

@property (nonatomic, retain) SUDescriptor *descriptor;
@property (nonatomic, retain) SUDownloadOptions *downloadOptions;
@property (nonatomic, retain) SUDownloadMetadata *metadata;
@property (nonatomic, retain) SUOperationProgress *progress;

+ (bool)supportsSecureCoding;

- (bool)allowCellularDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)downloadOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isValidDownload;
- (id)metadata;
- (id)progress;
- (void)setDescriptor:(id)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProgress:(id)arg1;
- (unsigned long long)totalSpaceConsumed;

@end
