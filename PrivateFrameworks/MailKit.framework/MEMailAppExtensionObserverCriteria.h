
@interface MEMailAppExtensionObserverCriteria : NSObject {
    NSArray * _capabilities;
    bool  _includeDisabled;
}

@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) bool includeDisabled;

- (void).cxx_destruct;
- (id)capabilities;
- (bool)includeDisabled;
- (id)initWithCapabilities:(id)arg1 includeDisabled:(bool)arg2;

@end
