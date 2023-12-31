
@interface SALocalSearchShowPlaceDetails : SABaseClientBoundCommand

@property (nonatomic) long long itemIndex;

+ (id)showPlaceDetails;
+ (id)showPlaceDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)itemIndex;
- (bool)requiresResponse;
- (void)setItemIndex:(long long)arg1;

@end
