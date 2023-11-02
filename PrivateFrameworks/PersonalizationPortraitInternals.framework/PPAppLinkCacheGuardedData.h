
@interface PPAppLinkCacheGuardedData : NSObject {
    NSMutableSet * _enabledAppIDs;
    NSMutableDictionary * _mutableURLToAppID;
    NSDictionary * _urlToAppID;
}

- (void).cxx_destruct;

@end
