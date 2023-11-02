
@interface MRUMediaSuggestionsPullDataSource : NSObject <MRUMediaSuggestionsDataSource> {
    <MRUMediaSuggestionsDataSourceDelegate> * _delegate;
    NSDate * _lastRequestDate;
    NSDictionary * _mediaSuggestions;
    MRMediaSuggestionPreferences * _preferences;
    MRMediaSuggestionRequest * _request;
    bool  _requestActive;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMediaSuggestionsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic, retain) NSDictionary *mediaSuggestions;
@property (nonatomic, retain) MRMediaSuggestionPreferences *preferences;
@property (nonatomic, retain) MRMediaSuggestionRequest *request;
@property (nonatomic) bool requestActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)lastRequestDate;
- (id)mediaSuggestions;
- (id)preferences;
- (void)refreshMediaSuggestions;
- (id)request;
- (bool)requestActive;
- (id)requestQueue;
- (void)setDelegate:(id)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setMediaSuggestions:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestActive:(bool)arg1;
- (void)setRequestQueue:(id)arg1;

@end
