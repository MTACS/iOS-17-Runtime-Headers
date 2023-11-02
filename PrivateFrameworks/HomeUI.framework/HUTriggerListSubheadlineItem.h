
@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView> {
    <HasRemoteAccessState> * _remoteAccessInfo;
}

@property (nonatomic, readonly) <HasRemoteAccessState> *remoteAccessInfo;

- (void).cxx_destruct;
- (id)_attributedDescription;
- (id)_attributedDescriptionForNoRemoteAccess;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithRemoteAccessInfo:(id)arg1;
- (Class)mapsToViewClass;
- (id)remoteAccessInfo;
- (id)resultsForRemoteAccessState:(unsigned long long)arg1;

@end
