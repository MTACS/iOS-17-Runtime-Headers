
@interface SALocalSearchMapViewport : SADomainObject

@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeInSecondsSinceViewportChanged;
@property (nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property (nonatomic, copy) NSArray *vertices;
@property (nonatomic) double westLongitude;

+ (id)mapViewport;
+ (id)mapViewportWithDictionary:(id)arg1 context:(id)arg2;

- (double)eastLongitude;
- (id)encodedClassName;
- (id)groupIdentifier;
- (double)northLatitude;
- (void)setEastLongitude:(double)arg1;
- (void)setNorthLatitude:(double)arg1;
- (void)setSouthLatitude:(double)arg1;
- (void)setTimeInSecondsSinceViewportChanged:(double)arg1;
- (void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg1;
- (void)setVertices:(id)arg1;
- (void)setWestLongitude:(double)arg1;
- (double)southLatitude;
- (double)timeInSecondsSinceViewportChanged;
- (double)timeInSecondsSinceViewportEnteredForeground;
- (id)vertices;
- (double)westLongitude;

@end
