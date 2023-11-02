
@interface NEArticleLinkPresentationSource : NSObject <NELinkPresentationSource> {
    LPImage * _linkPresentationImage;
    NSString * _selectedText;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) LPImage *linkPresentationImage;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (double)deviceScreenScaleFromPotentialBackgroundThread;

- (void).cxx_destruct;
- (id)initWithHeadline:(id)arg1 articleURL:(id)arg2 selectedText:(id)arg3;
- (id)linkMetadata;
- (id)linkPresentationImage;
- (id)linkPresentationImageFromHeadline:(id)arg1;
- (id)selectedText;
- (id)title;
- (id)titleFromHeadline:(id)arg1;
- (id)url;

@end
