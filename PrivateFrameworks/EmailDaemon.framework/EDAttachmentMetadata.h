
@interface EDAttachmentMetadata : NSObject {
    NSString * _attachmentHash;
    NSNumber * _attachmentID;
    NSDate * _downloadDate;
    NSDate * _lastViewed;
    NSString * _nameOnDisk;
    NSNumber * _size;
    NSNumber * _viewCount;
    NSNumber * _viewCountByTapped;
}

@property (nonatomic, readonly) NSString *attachmentHash;
@property (nonatomic, retain) NSNumber *attachmentID;
@property (nonatomic, readonly) NSDate *downloadDate;
@property (nonatomic, readonly) NSDate *lastViewed;
@property (nonatomic, readonly) NSString *nameOnDisk;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) NSNumber *viewCount;
@property (nonatomic, readonly) NSNumber *viewCountByTapped;

- (void).cxx_destruct;
- (id)attachmentHash;
- (id)attachmentID;
- (id)description;
- (id)downloadDate;
- (id)initWithAttachmentHash:(id)arg1 nameOnDisk:(id)arg2 size:(id)arg3 downloadDate:(id)arg4;
- (id)initWithAttachmentID:(id)arg1 attachmentHash:(id)arg2 nameOnDisk:(id)arg3 size:(id)arg4 downloadDate:(id)arg5 viewCount:(id)arg6 lastViewed:(id)arg7 viewCountByTapped:(id)arg8;
- (id)initWithAttachmentID:(id)arg1 nameOnDisk:(id)arg2;
- (id)lastViewed;
- (id)nameOnDisk;
- (void)setAttachmentID:(id)arg1;
- (id)size;
- (id)viewCount;
- (id)viewCountByTapped;

@end
