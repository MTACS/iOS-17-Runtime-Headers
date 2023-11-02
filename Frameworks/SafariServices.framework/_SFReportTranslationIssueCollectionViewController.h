
@interface _SFReportTranslationIssueCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITextViewDelegate, _SFReportTranslationIssueFooterDelegate, _SFReportTranslationIssueReportButtonCellDelegate> {
    <_SFBrowserContentController> * _browserContentController;
    NSIndexPath * _checkedTranslationIssueIndexPath;
    bool  _isTranslationIssueChecked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createCollectionViewLayout;
- (id)_translationIssueForRowAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithBrowserContentController:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)presentLearnMoreViewController:(id)arg1;
- (void)reportTranslationIssue;
- (void)viewDidLoad;

@end
