
@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {
    NSArray * _groups;
    GEOAutocompleteSessionData * _sessionData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOAutocompleteSessionData *sessionData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)groups;
- (id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4;
- (id)sessionData;

@end
