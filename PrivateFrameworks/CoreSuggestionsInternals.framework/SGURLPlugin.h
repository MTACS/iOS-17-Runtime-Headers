
@interface SGURLPlugin : NSObject <FIAPPlugin, HVRemindersConsumer> {
    id /* block */  _entityStoreGetter;
    SGURLDissector * _urlDissector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_consumeContentParts:(id)arg1 title:(id)arg2 fromHandle:(id)arg3 documentDate:(id)arg4 isOutgoingDocument:(bool)arg5 uniqueIdentifier:(id)arg6 domainIdentifier:(id)arg7 bundleIdentifier:(id)arg8 context:(id)arg9;
- (bool)_shouldProcessSearchableItem:(id)arg1;
- (id)_urlContainerFromText:(id)arg1 documentDate:(id)arg2 documentTitle:(id)arg3 handle:(id)arg4 isOutgoingDocument:(bool)arg5 uniqueIdentifier:(id)arg6 domainIdentifier:(id)arg7 bundleIdentifier:(id)arg8;
- (id)consumeRemindersContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (id)extractURLsFromAttributesOfItem:(id)arg1 handle:(id)arg2;
- (id)extractURLsFromTextPropertiesOfItem:(id)arg1 handle:(id)arg2;
- (id)identifier;
- (id)init;
- (id)initWithEntityStore:(id)arg1;
- (id)initWithEntityStoreGetter:(id /* block */)arg1;
- (id)processSearchableItem:(id)arg1;
- (id)setup;

@end
