
@interface HomeEntity : INObject

@property (nonatomic, copy) NSArray *deviceTypes;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, copy) NSString *home;
@property (nonatomic, copy) NSString *room;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSArray *zones;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
