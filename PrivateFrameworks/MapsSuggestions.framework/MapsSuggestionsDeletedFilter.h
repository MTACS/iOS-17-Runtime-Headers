
@interface MapsSuggestionsDeletedFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (bool)shouldKeepEntry:(id)arg1;

@end
