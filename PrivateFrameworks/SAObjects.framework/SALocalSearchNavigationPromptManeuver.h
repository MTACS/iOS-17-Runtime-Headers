
@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (nonatomic, copy) NSNumber *maneuverIndex;

+ (id)navigationPromptManeuver;
+ (id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)maneuverIndex;
- (bool)requiresResponse;
- (void)setManeuverIndex:(id)arg1;

@end
