
@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficSignal * _trafficSignal;
}

@property (nonatomic, readonly) unsigned int countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCountryCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficSignal:(id)arg4 onRoute:(id)arg5;
- (id)position;
- (int)type;

@end
