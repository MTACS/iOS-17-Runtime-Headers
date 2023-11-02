
@interface PhotosUICore.PhotosDetailsSharedLibraryWidget : PhotosUICore.PhotosDetailsWidget {
    void contextObservation;
    void widgetInteractionDelegate;
}

@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate;

- (void).cxx_destruct;
- (id)context;
- (id)init;
- (void)setContext:(id)arg1;
- (void)setWidgetInteractionDelegate:(id)arg1;
- (id)snappableWidgetIdentifier;
- (id)widgetInteractionDelegate;

@end
