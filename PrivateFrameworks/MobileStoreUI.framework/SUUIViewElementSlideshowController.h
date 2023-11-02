
@interface SUUIViewElementSlideshowController : NSObject <SUUISlideshowViewControllerDataSource, SUUISlideshowViewControllerDelegate> {
    NSMutableArray * _dataConsumers;
    <SUUIViewElementSlideshowDelegate> * _delegate;
    SUUIViewElementLayoutContext * _layoutContext;
    NSMutableArray * _lockups;
    SUUISlideshowViewController * _padViewController;
    SUUIIPhoneSlideshowViewController * _phoneViewController;
    long long  _selectedIndex;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *dataConsumers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIViewElementSlideshowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIViewElementLayoutContext *layoutContext;
@property (nonatomic, readonly) long long numberOfSlideshowItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataConsumers;
- (void)dealloc;
- (id)delegate;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (id)layoutContext;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (long long)numberOfSlideshowItems;
- (void)presentFromParentViewController:(id)arg1;
- (void)setDataConsumers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutContext:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1;

@end
