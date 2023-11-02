
@interface HealthAppLinkBuilder : NSObject {
    HKProfileIdentifier * _profileIdentifier;
    NSString * _source;
    bool  _useExternalURLScheme;
}

@property (nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, retain) NSString *source;
@property bool useExternalURLScheme;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 useExternalURLScheme:(bool)arg2;
- (id)initWithProfileIdentifier:(id)arg1;
- (id)initWithProfileIdentifier:(id)arg1 source:(id)arg2;
- (id)initWithProfileIdentifier:(id)arg1 source:(id)arg2 useExternalURLScheme:(bool)arg3;
- (id)initWithProfileIdentifier:(id)arg1 useExternalURLScheme:(bool)arg2;
- (id)profileIdentifier;
- (void)setSource:(id)arg1;
- (void)setUseExternalURLScheme:(bool)arg1;
- (id)source;
- (bool)useExternalURLScheme;

@end
