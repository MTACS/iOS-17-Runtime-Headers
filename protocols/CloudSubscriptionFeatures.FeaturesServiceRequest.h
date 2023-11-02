
@protocol CloudSubscriptionFeatures.FeaturesServiceRequest

@required

- (void)clearCacheAndNotify;
- (void)getFeatureEligibilityFor:(void *)arg1 bundleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestFeatureWithId:(void *)arg1 ignoreCache:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CloudFeature *, NSError *, void*
- (void)requestGeoClassificationFor:(void *)arg1 bundleID:(void *)arg2 altDSID:(void *)arg3 ignoreCache:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC25CloudSubscriptionFeatures21GeoClassificationInfo *, NSError *, void*

@end
