
@interface MediaStream : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) Device *groupLeader;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
