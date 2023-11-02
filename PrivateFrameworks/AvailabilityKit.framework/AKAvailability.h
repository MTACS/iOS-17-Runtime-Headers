
@interface AKAvailability : NSObject {
    NSString * _activityIdentifierString;
    bool  _available;
    bool  _personalizedAvailability;
}

@property (nonatomic, readonly) NSUUID *activityIdentifier;
@property (nonatomic, readonly) NSString *activityIdentifierString;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (getter=isAvailableToMe, nonatomic, readonly) bool availableToMe;
@property (nonatomic, readonly) bool personalizedAvailability;

+ (id)logger;

- (void).cxx_destruct;
- (id)_initWithAvailable:(bool)arg1 activityIdentifierString:(id)arg2 personalizedAvailability:(bool)arg3;
- (id)_payloadDictionary;
- (id)activityIdentifier;
- (id)activityIdentifierString;
- (id)initWithAvailable:(bool)arg1 activityIdentifier:(id)arg2;
- (id)initWithAvailable:(bool)arg1 activityIdentifierString:(id)arg2;
- (id)initWithPublishedStatus:(id)arg1;
- (id)initWithStatusPayload:(id)arg1 invitationPayload:(id)arg2;
- (bool)isAvailable;
- (bool)isAvailableToMe;
- (bool)personalizedAvailability;
- (id)statusPublishRequest;

@end
