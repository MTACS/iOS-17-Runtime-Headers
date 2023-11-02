
@interface HFDashboardStaticSectionListItem : HFStaticItem <HFReorderableItemListItemProtocol> {
    void sectionType;
    void uuidString;
}

@property (nonatomic, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)initWithResults:(id)arg1;
- (id)initWithResultsBlock:(id /* block */)arg1;
- (void)setUuidString:(id)arg1;
- (id)uuidString;

@end
