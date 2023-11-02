
@interface MUShareSheetPresenter : NSObject <MUActivityViewControllerDelegate> {
    MUActivityViewController * _activityViewController;
    <MUShareSheetPresenterDelegate> * _delegate;
    <_MKPlaceItem> * _placeItem;
    MUPresentationOptions * _presentationOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUShareSheetPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic, readonly) MUPresentationOptions *presentationOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPlaceItem:(id)arg1 presentationOptions:(id)arg2;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (id)placeItem;
- (void)present;
- (id)presentationOptions;
- (void)setDelegate:(id)arg1;

@end
