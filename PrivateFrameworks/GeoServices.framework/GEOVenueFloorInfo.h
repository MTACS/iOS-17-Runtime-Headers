
@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo> {
    unsigned long long  _levelID;
    short  _ordinal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long levelID;
@property (nonatomic, readonly) short ordinal;
@property (readonly) Class superclass;

+ (id)floorInfosFromLevels:(id)arg1;
+ (bool)isIntegerValidOrdinal:(long long)arg1;

- (id)init;
- (id)initWithLevel:(id)arg1;
- (id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2;
- (unsigned long long)levelID;
- (short)ordinal;

@end
