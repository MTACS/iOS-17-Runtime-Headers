
@interface PLiCPLTransferProgress : NSObject {
    unsigned long long  _notUploadedItemsCount;
    unsigned long long  _notUploadedPhotosCount;
    unsigned long long  _notUploadedVideosCount;
}

@property (nonatomic) unsigned long long notUploadedItemsCount;
@property (nonatomic) unsigned long long notUploadedPhotosCount;
@property (nonatomic) unsigned long long notUploadedVideosCount;

- (id)description;
- (unsigned long long)notUploadedItemsCount;
- (unsigned long long)notUploadedPhotosCount;
- (unsigned long long)notUploadedVideosCount;
- (void)setNotUploadedItemsCount:(unsigned long long)arg1;
- (void)setNotUploadedPhotosCount:(unsigned long long)arg1;
- (void)setNotUploadedVideosCount:(unsigned long long)arg1;

@end
