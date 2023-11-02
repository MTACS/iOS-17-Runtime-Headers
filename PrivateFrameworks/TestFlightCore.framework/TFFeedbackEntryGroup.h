
@interface TFFeedbackEntryGroup : NSObject {
    unsigned long long  _election;
    NSArray * _entries;
    NSString * _footerText;
    NSDictionary * _footerTextLinkMap;
    TFFeedbackEntry * _groupToggleEntry;
    NSString * _headerText;
    NSDictionary * _headerTextLinkMap;
    NSString * _identifier;
    NSString * _title;
    bool  _toggleable;
}

@property (nonatomic, readonly) unsigned long long election;
@property (nonatomic, readonly, copy) NSArray *entries;
@property (nonatomic, readonly, copy) NSString *footerText;
@property (nonatomic, readonly, copy) NSDictionary *footerTextLinkMap;
@property (nonatomic, readonly) TFFeedbackEntry *groupToggleEntry;
@property (nonatomic, readonly, copy) NSString *headerText;
@property (nonatomic, readonly, copy) NSDictionary *headerTextLinkMap;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isToggleable, nonatomic, readonly) bool toggleable;

- (void).cxx_destruct;
- (unsigned long long)election;
- (id)entries;
- (id)footerText;
- (id)footerTextLinkMap;
- (id)groupToggleEntry;
- (id)headerText;
- (id)headerTextLinkMap;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 entries:(id)arg2 title:(id)arg3 election:(unsigned long long)arg4 headerText:(id)arg5 headerTextLinkMap:(id)arg6 footerText:(id)arg7 footerTextLinkMap:(id)arg8;
- (bool)isToggleable;
- (unsigned long long)numberOfVisibleItemsForIncludeState:(bool)arg1;
- (id)title;
- (id)visibleEntryForIndex:(unsigned long long)arg1;

@end
