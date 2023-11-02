
@interface SiriRemoteTimerTarget : INObject

@property (nonatomic, copy) NSArray *deviceNames;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *roomNames;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
