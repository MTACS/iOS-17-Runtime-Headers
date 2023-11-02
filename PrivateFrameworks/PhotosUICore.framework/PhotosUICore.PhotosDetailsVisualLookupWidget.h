
@interface PhotosUICore.PhotosDetailsVisualLookupWidget : PhotosUICore.PhotosDetailsWidget {
    void contextObservation;
    void widgetInteractionDelegate;
}

@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate;

- (void).cxx_destruct;
- (long long)contentLayoutStyle;
- (id)context;
- (id)init;
- (void)setContext:(id)arg1;
- (void)setWidgetInteractionDelegate:(id)arg1;
- (id)snappableWidgetIdentifier;
- (id)widgetInteractionDelegate;

@end
