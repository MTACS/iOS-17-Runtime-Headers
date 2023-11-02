
@interface WFGlyphSelectionEvent : WFEvent {
    NSString * _identifier;
    NSString * _key;
    bool  _searchActive;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool searchActive;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)identifier;
- (id)key;
- (bool)searchActive;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSearchActive:(bool)arg1;

@end
