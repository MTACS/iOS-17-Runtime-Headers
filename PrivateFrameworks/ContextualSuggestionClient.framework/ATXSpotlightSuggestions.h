
@interface ATXSpotlightSuggestions : NSObject {
    void scores;
    void sections;
    void topics;
}

@property (nonatomic, readonly) NSArray *scores;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *topics;

- (void).cxx_destruct;
- (id)createSectionsFromServerResults:(id)arg1;
- (id)init;
- (id)scores;
- (id)sections;
- (id)topics;

@end
