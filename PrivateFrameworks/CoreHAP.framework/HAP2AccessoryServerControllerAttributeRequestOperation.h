
@interface HAP2AccessoryServerControllerAttributeRequestOperation : HAP2AccessoryServerControllerOperation {
    HAP2AccessoryServerAccessoryCache * _cache;
}

+ (id)_characteristicsFromCachedCharacteristics:(id)arg1;
+ (id)_parseCache:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_sendRequest;
- (void)main;

@end
