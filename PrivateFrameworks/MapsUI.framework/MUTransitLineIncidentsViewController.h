
@interface MUTransitLineIncidentsViewController : UITableViewController <MKTransitItemReferenceDateUpdaterDelegate> {
    MKTransitItemIncidentsController * _incidentsController;
    <MUTransitLineIncidentsViewControllerDelegate> * _incidentsDelegate;
    MKTransitItemReferenceDateUpdater * _itemUpdater;
    <GEOTransitLineItem> * _lineItem;
    NSDate * _referenceDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUTransitLineIncidentsViewControllerDelegate> *incidentsDelegate;
@property (nonatomic, readonly) MKTransitItemReferenceDateUpdater *itemUpdater;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly, copy) NSDate *referenceDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_incidents;
- (void)_showIncidentDetails;
- (id)incidentsDelegate;
- (id)initWithLineItem:(id)arg1;
- (id)itemUpdater;
- (id)lineItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)referenceDate;
- (void)setIncidentsDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)updateTransitLineItemIfNeeded;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
