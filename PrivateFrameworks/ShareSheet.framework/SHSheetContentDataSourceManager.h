
@interface SHSheetContentDataSourceManager : NSObject {
    NSArray * _applicationActivityTypes;
    SHSheetContentDataSourceState * _currentState;
    SHSheetContentDataSource * _dataSource;
    <SHSheetContentDataSourceManagerDelegate> * _delegate;
    NSArray * _heroActionActivityTypes;
    NSMutableSet * _suggestLessIdentifiers;
}

@property (nonatomic, copy) NSArray *applicationActivityTypes;
@property (nonatomic, retain) SHSheetContentDataSourceState *currentState;
@property (nonatomic, retain) SHSheetContentDataSource *dataSource;
@property (nonatomic) <SHSheetContentDataSourceManagerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *heroActionActivityTypes;
@property (nonatomic, retain) NSMutableSet *suggestLessIdentifiers;

+ (id)contentCustomViewUniqueIdentifier;

- (void).cxx_destruct;
- (id)_uniqueIdentifierForSectionIdentifier:(id)arg1;
- (id)_updateCurrentStateWithChangeRequest:(id)arg1;
- (id)applicationActivityTypes;
- (id)currentState;
- (id)dataSource;
- (id)delegate;
- (id)heroActionActivityTypes;
- (id)initWithApplicationActivityTypes:(id)arg1 heroActionActivityTypes:(id)arg2;
- (void)setApplicationActivityTypes:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestLessIdentifiers:(id)arg1;
- (id)suggestLessIdentifiers;
- (void)suggestLessPeopleProxyForIdentifier:(id)arg1;
- (void)updateWithChangeRequest:(id)arg1;

@end
