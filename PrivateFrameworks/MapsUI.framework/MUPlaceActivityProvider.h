
@interface MUPlaceActivityProvider : NSObject {
    <MUPlaceActivityProviderDelegate> * _delegate;
    MKMapItem * _mapItem;
}

@property (nonatomic) <MUPlaceActivityProviderDelegate> *delegate;
@property (nonatomic, retain) MKMapItem *mapItem;

- (void).cxx_destruct;
- (id)activityAnnotationView;
- (id)activityImage;
- (id)activitySubTitle;
- (id)activityTitle;
- (id)activityURL;
- (id)delegate;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (id)mapMetadataSpecialization;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;

@end
