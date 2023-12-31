
@interface WBSSiriIntelligenceDonorBookmarkData : NSObject {
    NSString * _bookmarkTitle;
    NSString * _bookmarkURLString;
    NSString * _coreSpotlightID;
}

@property (nonatomic, copy) NSString *bookmarkTitle;
@property (nonatomic, copy) NSString *bookmarkURLString;
@property (nonatomic, copy) NSString *coreSpotlightID;

- (void).cxx_destruct;
- (id)bookmarkTitle;
- (id)bookmarkURLString;
- (id)coreSpotlightID;
- (void)setBookmarkTitle:(id)arg1;
- (void)setBookmarkURLString:(id)arg1;
- (void)setCoreSpotlightID:(id)arg1;

@end
