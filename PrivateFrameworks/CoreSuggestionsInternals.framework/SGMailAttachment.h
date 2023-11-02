
@interface SGMailAttachment : NSObject {
    NSString * _filename;
    bool  _isDownloadedLocally;
    NSString * _path;
    unsigned long long  _size;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) bool isApplicationMimeType;
@property (nonatomic, readonly) bool isCalendarMimeType;
@property (nonatomic, readonly) bool isDownloadedLocally;
@property (nonatomic, readonly) bool isMediaMimeType;
@property (nonatomic, readonly) bool isOthersMimeType;
@property (nonatomic, readonly) bool isWalletOrderMimeType;
@property (nonatomic, readonly) bool isWalletPassMimeType;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) unsigned long long size;
@property (nonatomic, readonly) NSString *type;

+ (id)attachmentWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
+ (id)attachmentsFromBiomeAttachments:(id)arg1;
+ (id)attachmentsFromSearchableItem:(id)arg1;
+ (id)testAttachmentWithType:(id)arg1 size:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)filename;
- (id)initWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (bool)isApplicationMimeType;
- (bool)isCalendarMimeType;
- (bool)isDownloadedLocally;
- (bool)isMediaMimeType;
- (bool)isOthersMimeType;
- (bool)isWalletOrderMimeType;
- (bool)isWalletPassMimeType;
- (id)mimeCategory;
- (id)path;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)type;

@end
