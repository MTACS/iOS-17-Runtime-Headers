
@interface MKLocalSearchSection : NSObject {
    bool  _enableMapsSuggestServerReranking;
    bool  _enforceServerResultsOrder;
    NSArray * _excludedClientResultTypes;
    NSArray * _includedClientResultTypes;
    bool  _isSectionForClientOnlyResults;
    NSArray * _results;
    bool  _shouldInterleaveClientResults;
    NSString * _title;
}

@property (nonatomic, readonly) bool enableMapsSuggestServerReranking;
@property (nonatomic, readonly) bool enforceServerResultsOrder;
@property (nonatomic, readonly) NSArray *excludedClientResultTypes;
@property (nonatomic, readonly) NSArray *includedClientResultTypes;
@property (nonatomic, readonly) bool isSectionForClientOnlyResults;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) bool shouldInterleaveClientResults;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)enableMapsSuggestServerReranking;
- (bool)enforceServerResultsOrder;
- (id)excludedClientResultTypes;
- (id)includedClientResultTypes;
- (id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(bool)arg3 enforceServerResultsOrder:(bool)arg4 enableMapsSuggestServerReranking:(bool)arg5 isSectionForClientOnlyResults:(bool)arg6 includedClientResultTypes:(id)arg7 excludedClientResultTypes:(id)arg8;
- (bool)isSectionForClientOnlyResults;
- (id)results;
- (bool)shouldInterleaveClientResults;
- (id)title;

@end
