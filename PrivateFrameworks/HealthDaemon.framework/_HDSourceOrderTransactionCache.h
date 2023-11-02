
@interface _HDSourceOrderTransactionCache : NSObject {
    NSArray * _defaultOrderedSources;
    NSMutableDictionary * _orderedSourceIDsByBundleIdentifier;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)init;

@end
