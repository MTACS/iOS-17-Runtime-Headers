
@interface Device : INObject

@property (nonatomic, retain) NSNumber *confirmed;
@property (nonatomic, retain) DeviceContext *context;
@property (nonatomic, retain) NSNumber *currentHome;
@property (nonatomic, retain) NSNumber *currentRoom;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *disambiguated;
@property (nonatomic, copy) NSString *displayableName;
@property (nonatomic, retain) NSNumber *isDeviceSelectedUsingContext;
@property (nonatomic, retain) NSNumber *isEndpoint;
@property (nonatomic, retain) NSNumber *isPreResolved;
@property (nonatomic, copy) NSString *mediaSystemId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *numberOfAffectedRooms;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic, retain) NSNumber *skipConfirmation;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *zoneNames;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
