
@interface HealthExperienceUI.HealthURLActivityItemProvider : UIActivityItemProvider {
    void image;
    void subtitle;
    void thumbnailImage;
    void title;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end
