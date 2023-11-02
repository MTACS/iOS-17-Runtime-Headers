
@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {
    bool  _enableMapsSuggestServerReranking;
    bool  _enforceServerResultsOrder;
    NSArray * _excludedClientResultTypes;
    NSArray * _includedClientResultTypes;
    bool  _isSectionForClientOnlyResults;
    NSArray * _items;
    NSString * _localizedSectionHeader;
    bool  _shouldInterleaveClientResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableMapsSuggestServerReranking;
@property (nonatomic, readonly) bool enforceServerResultsOrder;
@property (nonatomic, readonly) NSArray *excludedClientResultTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *includedClientResultTypes;
@property (nonatomic, readonly) bool isSectionForClientOnlyResults;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionHeader;
@property (nonatomic, readonly) bool shouldInterleaveClientResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enableMapsSuggestServerReranking;
- (bool)enforceServerResultsOrder;
- (id)excludedClientResultTypes;
- (id)includedClientResultTypes;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4 collections:(id)arg5 publishers:(id)arg6;
- (bool)isSectionForClientOnlyResults;
- (id)items;
- (id)localizedSectionHeader;
- (bool)shouldInterleaveClientResults;

@end
