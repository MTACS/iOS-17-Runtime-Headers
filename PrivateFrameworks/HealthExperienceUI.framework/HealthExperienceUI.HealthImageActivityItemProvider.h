
@interface HealthExperienceUI.HealthImageActivityItemProvider : UIActivityItemProvider {
    void image;
    void subtitle;
    void thumbnailImage;
    void title;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end
