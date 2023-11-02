
@protocol _INPBPlace <NSObject>

@required

+ (Class)placeDescriptorsType;

- (int)StringAsPersonalPlaceType:(NSString *)arg1;
- (void)addPlaceDescriptors:(_INPBString *)arg1;
- (void)clearPlaceDescriptors;
- (bool)hasPersonalPlaceType;
- (bool)hasPlaceSubType;
- (bool)hasPlaceType;
- (int)personalPlaceType;
- (NSString *)personalPlaceTypeAsString:(int)arg1;
- (NSArray *)placeDescriptors;
- (_INPBString *)placeDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDescriptorsCount;
- (_INPBString *)placeSubType;
- (_INPBString *)placeType;
- (void)setHasPersonalPlaceType:(bool)arg1;
- (void)setPersonalPlaceType:(int)arg1;
- (void)setPlaceDescriptors:(NSArray *)arg1;
- (void)setPlaceSubType:(_INPBString *)arg1;
- (void)setPlaceType:(_INPBString *)arg1;

@end
