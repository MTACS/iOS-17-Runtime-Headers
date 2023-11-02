
@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOPDMapsIdentifier * _mapsIdentifier;
}

@property (nonatomic, readonly) NSData *comparableRepresentation;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=hasCoordinate, nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int resultProviderID;

+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comparableRepresentation;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCoordinate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(struct { double x1; double x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(struct { double x1; double x2; })arg3;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapsIdentifier:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGEOMapItemIdentifier:(id)arg1;
- (bool)isValid;
- (id)mapsIdentifier;
- (unsigned long long)muid;
- (int)resultProviderID;
- (id)shortDebugDescription;

@end
