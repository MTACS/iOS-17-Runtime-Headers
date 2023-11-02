
@interface TPSSearchResult : NSObject <NSSecureCoding> {
    void items;
    void query;
    void suggestions;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) TPSSearchQuery *query;
@property (nonatomic, copy) NSArray *suggestions;

+ (id)makeResultWith:(id)arg1 items:(id)arg2 suggestions:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 items:(id)arg2 suggestions:(id)arg3;
- (id)items;
- (id)query;
- (void)setItems:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
