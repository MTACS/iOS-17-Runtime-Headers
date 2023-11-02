
@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {
    NSMutableArray * _backgroundColors;
    bool  _hasScheduledCoalescedUpdate;
    NSSet * _subrequestTokens;
    NSMutableArray * _thumbnailImages;
}

@property (nonatomic, readonly, copy) NSArray *backgroundColors;
@property (nonatomic) bool hasScheduledCoalescedUpdate;
@property (nonatomic, copy) NSSet *subrequestTokens;
@property (nonatomic, readonly, copy) NSArray *thumbnailImages;

- (void).cxx_destruct;
- (id)backgroundColors;
- (bool)hasScheduledCoalescedUpdate;
- (id)init;
- (void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setHasScheduledCoalescedUpdate:(bool)arg1;
- (void)setSubrequestTokens:(id)arg1;
- (void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)subrequestTokens;
- (id)thumbnailImages;

@end
