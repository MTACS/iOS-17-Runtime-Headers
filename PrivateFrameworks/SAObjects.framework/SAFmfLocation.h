
@interface SAFmfLocation : SALocation

@property (nonatomic, copy) NSNumber *distance;
@property (nonatomic, retain) SAPersonAttribute *friend;
@property (nonatomic, copy) NSNumber *locationDate;
@property (nonatomic, retain) SAPersonAttribute *theFriend;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)distance;
- (id)encodedClassName;
- (id)friend;
- (id)groupIdentifier;
- (id)locationDate;
- (void)setDistance:(id)arg1;
- (void)setFriend:(id)arg1;
- (void)setLocationDate:(id)arg1;
- (void)setTheFriend:(id)arg1;
- (id)theFriend;

@end
