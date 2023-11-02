
@interface NewsUI2.LocalNewsChannelService : _TtCs12_SwiftObject <FCLocalChannelsProvider> {
    void _hasKnownChannelIDs;
    void _lastKnownChannelIDs;
    void localAreasManager;
    void locationManager;
    void personalizationService;
    void refreshQueue;
    void subscriptionList;
    void tagService;
}

@property (nonatomic, copy) NSArray *lastKnownChannelIDs;

- (id)lastKnownChannelIDs;
- (void)setLastKnownChannelIDs:(id)arg1;

@end
