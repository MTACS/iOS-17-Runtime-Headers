
@interface SALocalSearchMapViewportVertex : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly) Class superclass;

+ (id)mapViewportVertex;
+ (id)mapViewportVertexWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)latitude;
- (double)longitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end