
@interface MPStoreModelStoreAssetBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int endpointType : 1; 
        unsigned int redownloadParameters : 1; 
        unsigned int redownloadable : 1; 
        unsigned int accountIdentifier : 1; 
        unsigned int shouldReportPlayEvents : 1; 
        unsigned int subscriptionRequired : 1; 
    }  _requestedStoreAssetProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
