
@interface EKImage : EKObject

@property (nonatomic, readonly) NSData *colorData;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

+ (Class)frozenClass;
+ (id)imageWithEventStore:(id)arg1 systemSymbolName:(id)arg2 colorData:(id)arg3;
+ (id)knownIdentityKeysForComparison;

- (id)_generateIdentifierInCalendar:(id)arg1;
- (id)colorData;
- (id)identifier;
- (id)name;
- (void)saveInCalendar:(id)arg1;
- (void)setColorData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setType:(long long)arg1;
- (id)source;
- (long long)type;

@end
