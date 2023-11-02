
@interface SiriDevice : INObject

@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, copy) NSString *accessoryType;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *homeID;
@property (nonatomic, retain) NSNumber *isInRespondingRoom;
@property (nonatomic, retain) NSNumber *isRespondingDevice;
@property (nonatomic, copy) NSData *mementoData;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic) long long targetMatchType;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
