
@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource : NSObject <UITableViewDataSource> {
    NSMutableSet * _currentlySelectedReasons;
    NSArray * _otherReasons;
    NSArray * _promotedReasons;
}

@property (nonatomic, readonly) NSMutableSet *currentlySelectedReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *otherReasons;
@property (nonatomic, readonly) NSArray *promotedReasons;
@property (nonatomic, readonly) long long selectedReasonsCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSelectReason:(id)arg1;
- (id)currentlySelectedReasons;
- (void)deselect:(id)arg1;
- (id)initWithReasons:(id)arg1 currentlySelected:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)otherReasons;
- (id)promotedReasons;
- (void)select:(id)arg1;
- (id)selectedReasons;
- (long long)selectedReasonsCount;
- (void)setupOtherReasons:(id)arg1;
- (void)setupPromotedReasons:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
