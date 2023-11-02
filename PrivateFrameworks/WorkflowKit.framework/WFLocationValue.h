
@interface WFLocationValue : NSObject <WFVariableSerialization> {
    bool  _currentLocation;
    WFVariableString * _legacyVariableString;
    NSString * _locationName;
    CLPlacemark * _placemark;
}

@property (getter=isCurrentLocation, nonatomic, readonly) bool currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultSearchText;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFVariableString *legacyVariableString;
@property (nonatomic, readonly) NSString *locationName;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultSearchText;
- (id)displayString;
- (id)initWithCurrentLocation;
- (id)initWithLegacyVariableString:(id)arg1;
- (id)initWithLocationName:(id)arg1;
- (id)initWithLocationName:(id)arg1 placemark:(id)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isCurrentLocation;
- (id)legacyVariableString;
- (id)locationName;
- (id)placemark;
- (id)serializedRepresentation;

@end
