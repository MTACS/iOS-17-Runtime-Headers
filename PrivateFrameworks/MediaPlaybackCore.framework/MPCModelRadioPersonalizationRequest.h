
@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    bool  _analyticsSignpostsEnabled;
    MPSectionedCollection * _radioStationTracks;
}

@property (nonatomic) bool analyticsSignpostsEnabled;

+ (bool)requiresNetwork;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)analyticsSignpostsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithRadioStationTracks:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setAnalyticsSignpostsEnabled:(bool)arg1;

@end
