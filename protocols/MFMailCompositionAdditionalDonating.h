
@protocol MFMailCompositionAdditionalDonating <NSObject>

@required

- (NSArray *)UTITypes;
- (NSArray *)cloudPhotoIDs;
- (NSArray *)contentText;
- (NSArray *)contentURLs;
- (NSArray *)photoIDs;
- (void)setCloudPhotoIDs:(NSArray *)arg1;
- (void)setContentText:(NSArray *)arg1;
- (void)setContentURLs:(NSArray *)arg1;
- (void)setPhotoIDs:(NSArray *)arg1;
- (void)setUTITypes:(NSArray *)arg1;

@end
