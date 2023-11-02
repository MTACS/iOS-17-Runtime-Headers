
@interface GEOMultiSectionFeature : NSObject {
    GEOFeature * _feature;
    void * _multiSectionFeature;
}

@property (nonatomic, readonly) struct GeoCodecsAddressRange { unsigned short x1[2]; unsigned short x2[2]; }*addressRange;
@property (nonatomic, readonly) bool displaySpeedIsLimited;
@property (nonatomic, readonly) unsigned char displaySpeedLimit;
@property (nonatomic, readonly) bool displaySpeedLimitIsMPH;
@property (nonatomic, readonly) GEOFeature *feature;
@property (nonatomic, readonly) int formOfWay;
@property (nonatomic, readonly) void*get;
@property (nonatomic, readonly) bool isRoadSegmentReversed;
@property (nonatomic, readonly) struct GeoCodecsLaneGeometry { float x1; float x2; float x3; float x4; float x5; float x6; }*laneGeometry;
@property (nonatomic, readonly) unsigned int lineCrossingCount;
@property (nonatomic, readonly) unsigned int lineCrossingIndex;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) bool reverseDirectionDisplaySpeedIsLimited;
@property (nonatomic, readonly) unsigned char reverseDirectionDisplaySpeedLimit;
@property (nonatomic, readonly) bool reverseDirectionDisplaySpeedLimitIsMPH;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) unsigned long long roadPointCount;
@property (nonatomic, readonly) unsigned long long roadPointIndex;
@property (nonatomic, readonly) unsigned short roadWidth;
@property (nonatomic, readonly) unsigned long long sectionCount;
@property (nonatomic, readonly) unsigned long long sectionOffset;
@property (nonatomic, readonly) unsigned char speedLimit;
@property (nonatomic, readonly) unsigned int speedLimitShieldId;
@property (nonatomic, readonly) int travelDirection;

- (void).cxx_destruct;
- (struct GeoCodecsAddressRange { unsigned short x1[2]; unsigned short x2[2]; }*)addressRange;
- (union GeoCodecsVectorTileRect { struct { struct GeoCodecsVectorTilePoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct GeoCodecsVectorTilePoint { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)bounds;
- (bool)displaySpeedIsLimited;
- (unsigned char)displaySpeedLimit;
- (bool)displaySpeedLimitIsMPH;
- (id)feature;
- (int)formOfWay;
- (void*)get;
- (id)init:(void*)arg1 withVectorTile:(id)arg2;
- (bool)isRoadSegmentReversed;
- (struct GeoCodecsLaneGeometry { float x1; float x2; float x3; float x4; float x5; float x6; }*)laneGeometry;
- (unsigned int)lineCrossingCount;
- (unsigned int)lineCrossingIndex;
- (unsigned long long)muid;
- (bool)reverseDirectionDisplaySpeedIsLimited;
- (unsigned char)reverseDirectionDisplaySpeedLimit;
- (bool)reverseDirectionDisplaySpeedLimitIsMPH;
- (int)roadClass;
- (unsigned long long)roadPointCount;
- (unsigned long long)roadPointIndex;
- (unsigned short)roadWidth;
- (unsigned long long)sectionCount;
- (unsigned long long)sectionOffset;
- (unsigned char)speedLimit;
- (unsigned int)speedLimitShieldId;
- (int)travelDirection;

@end
