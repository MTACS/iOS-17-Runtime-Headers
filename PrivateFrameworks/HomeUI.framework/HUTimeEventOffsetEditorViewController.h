
@interface HUTimeEventOffsetEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate> {
    NSDateComponents * _currentOffset;
    <HUTimeEventOffsetEditorDelegate> * _delegate;
    NSDateComponents * _selectedOffset;
    NSString * _significantEvent;
}

@property (nonatomic, readonly) NSDateComponents *currentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTimeEventOffsetEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDateComponents *selectedOffset;
@property (nonatomic, readonly) NSString *significantEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)currentOffset;
- (id)delegate;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithSignificantEvent:(id)arg1 currentOffset:(id)arg2 delegate:(id)arg3;
- (id)selectedOffset;
- (void)setDelegate:(id)arg1;
- (void)setSelectedOffset:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)significantEvent;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
