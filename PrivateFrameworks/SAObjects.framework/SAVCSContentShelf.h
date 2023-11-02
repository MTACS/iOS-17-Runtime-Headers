
@interface SAVCSContentShelf : SAAceView

@property (nonatomic, copy) NSArray *contentHead;
@property (nonatomic, copy) NSArray *fetchMoreResultsCommands;
@property (nonatomic) long long preSelectedItem;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

+ (id)contentShelf;
+ (id)contentShelfWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentHead;
- (id)encodedClassName;
- (id)fetchMoreResultsCommands;
- (id)groupIdentifier;
- (long long)preSelectedItem;
- (void)setContentHead:(id)arg1;
- (void)setFetchMoreResultsCommands:(id)arg1;
- (void)setPreSelectedItem:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
