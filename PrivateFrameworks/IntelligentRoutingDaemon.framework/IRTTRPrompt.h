
@interface IRTTRPrompt : NSObject {
    NSArray * _popups;
    IRTTRURLQuery * _query;
}

@property (nonatomic, retain) NSArray *popups;
@property (nonatomic, retain) IRTTRURLQuery *query;

- (void).cxx_destruct;
- (id)popups;
- (id)query;
- (void)setPopups:(id)arg1;
- (void)setQuery:(id)arg1;

@end
