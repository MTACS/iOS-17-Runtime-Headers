
@interface PXLogsViewController : UIViewController {
    NSMutableArray * _compactLogs;
    NSDateFormatter * _dateFormatter;
    OSLogEventStreamBase * _eventStream;
    NSMutableArray * _expandedLogs;
    NSMutableAttributedString * _fullAttributedString;
    bool  _hasScheduledTextViewUpdate;
    NSMutableIndexSet * _isExpanded;
    NSMutableDictionary * _nextAvailableIndexByClassName;
    UIActivityIndicatorView * _spinnerView;
    NSDate * _startDate;
    NSMutableDictionary * _substitutionByObjectRepresentation;
    NSArray * _subsystemsAndCategories;
    UITextView * _textView;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)dateFormatter;
- (id)initLiveWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initLiveWithSubsystemsAndCategories:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 startDate:(id)arg3;
- (id)initWithSubsystemsAndCategories:(id)arg1 startDate:(id)arg2;
- (bool)isCollectionRepresentation:(id)arg1;
- (void)logAttributedString:(id)arg1;
- (void)prepareDiskStore;
- (void)prepareLiveStore;
- (void)removeSpinner;
- (void)setDateFormatter:(id)arg1;
- (void)setupEventStream:(id)arg1;
- (id)substitutionForCollectionRepresentation:(id)arg1 attributes:(id)arg2;
- (id)substitutionForObjectRepresentation:(id)arg1;
- (id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)arg1;
- (void)tapped:(id)arg1;
- (void)toggleModeForStringIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
