
@interface AVFragmentedAssetMinderInternal : NSObject {
    NSObject<OS_dispatch_queue> * accessSerializer;
    NSMutableSet * assets;
    double  mindingInterval;
}

@end
