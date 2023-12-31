
@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (nonatomic) bool avoidHighways;
@property (nonatomic) bool avoidTolls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)carRouteOptions;
+ (id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (bool)avoidHighways;
- (bool)avoidTolls;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAvoidHighways:(bool)arg1;
- (void)setAvoidTolls:(bool)arg1;

@end
