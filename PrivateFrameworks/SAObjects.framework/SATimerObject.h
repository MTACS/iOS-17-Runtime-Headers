
@interface SATimerObject : SADomainObject

@property (nonatomic, retain) SADataSourceInfo *dataSourceInfo;
@property (nonatomic, copy) NSNumber *isFiring;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSNumber *timerValue;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataSourceInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isFiring;
- (void)setDataSourceInfo:(id)arg1;
- (void)setIsFiring:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTimerValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (id)timerValue;
- (id)title;
- (id)type;

@end
