
@interface SXFeatures : NSObject <SXFeatures> {
    bool  _newAdsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool newAdsEnabled;
@property (readonly) Class superclass;

- (id)initWithNewAdsEnabled:(bool)arg1;
- (bool)newAdsEnabled;

@end
