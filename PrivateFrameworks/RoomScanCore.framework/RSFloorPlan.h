
@interface RSFloorPlan : NSObject <NSCopying, NSSecureCoding> {
    float  ceilingHeight;
    NSArray * curvedDoors;
    NSArray * curvedWalls;
    NSArray * curvedWindows;
    NSArray * doors;
    float  floorHeight;
    NSArray * floors;
    unsigned int  groupId;
    NSArray * objects;
    NSArray * opendoors;
    NSArray * openings;
    NSArray * roomTypes;
    float  rotationAngleAlongZ;
    long long  storyLevel;
    void translationXYZ;
    NSArray * wallLists;
    NSArray * walls;
    NSArray * windows;
}

@property (nonatomic, readonly) NSArray *curvedDoors;
@property (nonatomic, readonly) NSArray *curvedWalls;
@property (nonatomic, readonly) NSArray *curvedWindows;
@property (nonatomic, readonly) NSArray *doors;
@property (nonatomic, readonly) NSArray *floors;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) NSArray *opendoors;
@property (nonatomic, readonly) NSArray *openings;
@property (nonatomic, readonly) NSArray *roomTypes;
@property (nonatomic, readonly) long long storyLevel;
@property (nonatomic, readonly) NSArray *walls;
@property (nonatomic, readonly) NSArray *windows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendFloorPlan:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curvedDoors;
- (id)curvedWalls;
- (id)curvedWindows;
- (id)dictionaryRepresentation;
- (id)doors;
- (void)encodeWithCoder:(id)arg1;
- (id)floors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)objects;
- (id)opendoors;
- (id)openings;
- (id)roomTypes;
- (long long)storyLevel;
- (void)updateObjects:(id)arg1;
- (void)updateStructure:(id)arg1;
- (id)walls;
- (id)windows;
- (void)writeToJson:(id)arg1;
- (void)writeToObj:(id)arg1;
- (void)writeToPlist:(id)arg1;

@end
