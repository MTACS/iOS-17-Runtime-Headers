
@interface INFriendLocation : INObject

@property (nonatomic, retain) NSNumber *isInaccurate;
@property (nonatomic, retain) NSNumber *isProactiveLocation;
@property (nonatomic, retain) NSNumber *locateInProgress;
@property (nonatomic, retain) SpeakableLocation *location;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
