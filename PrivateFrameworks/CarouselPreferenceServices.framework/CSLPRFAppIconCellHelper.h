
@interface CSLPRFAppIconCellHelper : NSObject {
    <CSLPRFAppIconCellHelperDelegate> * _delegate;
    NSMutableDictionary * _outstandingRequests;
}

@property (nonatomic) <CSLPRFAppIconCellHelperDelegate> *delegate;

- (void).cxx_destruct;
- (id)blankIcon;
- (id)delegate;
- (void)didCompleteLoadForIdentifier:(id)arg1;
- (id)fetchLazyIconForSpecifier:(id)arg1;
- (id)init;
- (void)loadIconForSpecifier:(id)arg1 iconIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
