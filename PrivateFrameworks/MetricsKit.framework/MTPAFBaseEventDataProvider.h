
@interface MTPAFBaseEventDataProvider : MTBaseEventDataProvider

@property (nonatomic) <MTPAFBaseEventDataProviderDelegate> *delegate;

- (id)isOffline:(id)arg1;
- (id)knownFields;
- (id)osLanguages:(id)arg1;

@end
