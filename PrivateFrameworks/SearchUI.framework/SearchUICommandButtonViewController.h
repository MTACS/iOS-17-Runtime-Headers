
@interface SearchUICommandButtonViewController : SearchUIButtonItemViewController <CNActionViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIActionView *view;

- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (void)disableAndHideButton:(bool)arg1;
- (id)init;
- (void)setButtonItem:(id)arg1;
- (void)setCompact:(bool)arg1;
- (void)updateTitle;

@end
