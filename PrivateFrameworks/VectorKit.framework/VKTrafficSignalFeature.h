
@interface VKTrafficSignalFeature : VKTrafficFeature {
    unsigned int  _countryCode;
    bool  _hasCountryCode;
    long long  _type;
}

@property (nonatomic, readonly) unsigned int countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) long long type;

+ (id)stringForTrafficSignalType:(long long)arg1;

- (unsigned int)countryCode;
- (bool)hasCountryCode;
- (id)initWithTrafficSignal:(id)arg1 onRoute:(id)arg2;
- (id)initWithTrafficSignalType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 onRoute:(id)arg4;
- (void)populateDebugNode:(void*)arg1;
- (long long)type;

@end
