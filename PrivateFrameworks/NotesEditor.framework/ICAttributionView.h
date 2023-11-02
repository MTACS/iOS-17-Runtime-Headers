
@interface ICAttributionView : UIView {
    UIView * _attributionClippingView;
    UILabel * _attributionLabel;
    NSMapTable * _childAttributionViews;
    ICAttributionViewConfiguration * _configuration;
    UIImageView * _disclosureImageView;
    NSMapTable * _highlightViews;
    UIImageView * _statusImageView;
    UILabel * _timestampLabel;
}

@property (nonatomic, retain) UIView *attributionClippingView;
@property (nonatomic, retain) UILabel *attributionLabel;
@property (nonatomic, retain) NSMapTable *childAttributionViews;
@property (nonatomic, readonly) ICAttributionViewConfiguration *configuration;
@property (nonatomic, retain) UIImageView *disclosureImageView;
@property (nonatomic, retain) NSMapTable *highlightViews;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) UILabel *timestampLabel;

- (void).cxx_destruct;
- (id)attributionClippingView;
- (id)attributionLabel;
- (id)childAttributionViews;
- (id)configuration;
- (id)disclosureImageView;
- (id)highlightViews;
- (id)initWithConfiguration:(id)arg1;
- (void)setAttributionClippingView:(id)arg1;
- (void)setAttributionLabel:(id)arg1;
- (void)setChildAttributionViews:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisclosureImageView:(id)arg1;
- (void)setHighlightViews:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTimestampLabel:(id)arg1;
- (id)statusImageView;
- (id)timestampLabel;
- (void)updateContentAnimated:(bool)arg1;
- (void)updatePositionAndVisibility;
- (void)updateVisibility;

@end
