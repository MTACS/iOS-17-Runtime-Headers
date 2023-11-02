
@interface CNDuplicateContactsController : NSObject <ContactsUI.DuplicatesUIHelperDelegate> {
    long long  _allDuplicatesCount;
    CNContactFormatter * _contactFormatter;
    NSObject<CNContactDataSource> * _dataSource;
    <CNDuplicateContactsControllerDelegate> * _delegate;
    _TtC10ContactsUI18DuplicatesUIHelper * _duplicatesUIHelper;
    CNUIContactsEnvironment * _environment;
    bool  _isAlreadyFindingDuplicates;
    bool  _isPerformingMerge;
    double  _mergeCompletedAt;
    long long  _newDuplicatesCount;
}

@property (nonatomic) long long allDuplicatesCount;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (nonatomic) <CNDuplicateContactsControllerDelegate> *delegate;
@property (nonatomic, retain) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic) bool isAlreadyFindingDuplicates;
@property (nonatomic) bool isPerformingMerge;
@property (nonatomic) long long lastIgnoredNewDuplicatesCount;
@property (nonatomic) double mergeCompletedAt;
@property (nonatomic) long long newDuplicatesCount;

+ (id)defaultContactFormatter;
+ (id)defaultContactFormatterForDataSource:(id)arg1;
+ (id)os_log;

- (void).cxx_destruct;
- (long long)allDuplicatesCount;
- (bool)canMergeDuplicates;
- (id)contactFormatter;
- (id)contactStore;
- (id)dataSource;
- (void)decorateBannerViewCell:(id)arg1;
- (id)delegate;
- (void)didPerformDuplicatesMerge;
- (void)didSelectIgnoreAllDuplicates:(id)arg1 signaturesIgnored:(id)arg2;
- (void)didSelectMergeAllDuplicates:(id)arg1 signaturesToMerge:(id)arg2;
- (void)didSelectUnignoreDuplicate:(id)arg1;
- (void)duplicatesDidChange;
- (id)duplicatesUIHelper;
- (id)environment;
- (void)findDuplicates;
- (bool)hasNewDuplicates;
- (void)ignoreNewDuplicatesBanner;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 delegate:(id)arg3;
- (bool)isAlreadyFindingDuplicates;
- (bool)isBusy;
- (bool)isInMergeCooldown:(long long)arg1;
- (bool)isPerformingMerge;
- (long long)lastIgnoredNewDuplicatesCount;
- (double)mergeCompletedAt;
- (long long)newDuplicatesCount;
- (void)performIgnoreAll;
- (void)performMerge:(id)arg1;
- (void)presentDuplicatesUIFailureAlertForController:(id)arg1;
- (void)presentSheetBasedMergeForController:(id)arg1 showsIgnored:(bool)arg2;
- (void)refreshManagedDuplicates;
- (void)refreshManagedDuplicatesWithCompletionBlock:(id /* block */)arg1;
- (void)resetDuplicates;
- (void)setAllDuplicatesCount:(long long)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicatesUIHelper:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setIsAlreadyFindingDuplicates:(bool)arg1;
- (void)setIsPerformingMerge:(bool)arg1;
- (void)setLastIgnoredNewDuplicatesCount:(long long)arg1;
- (void)setMergeCompletedAt:(double)arg1;
- (void)setNewDuplicatesCount:(long long)arg1;
- (void)updateDuplicatesCounts;
- (bool)wantsToDisplayNewDuplicatesBanner:(long long)arg1;
- (void)willPerformDuplicatesMerge:(bool)arg1;

@end
