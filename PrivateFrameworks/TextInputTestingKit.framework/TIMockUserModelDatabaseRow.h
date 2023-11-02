
@interface TIMockUserModelDatabaseRow : NSObject {
    NSDate * _creationDate;
    NSString * _inputMode;
    NSString * _key;
    NSDate * _lastUpdateDate;
    NSData * _properties;
    NSNumber * _realValue;
    NSNumber * _secondaryValue;
    NSNumber * _value;
}

@property (retain) NSDate *creationDate;
@property (retain) NSString *inputMode;
@property (retain) NSString *key;
@property (retain) NSDate *lastUpdateDate;
@property (retain) NSData *properties;
@property (retain) NSNumber *realValue;
@property (retain) NSNumber *secondaryValue;
@property (retain) NSNumber *value;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithKey:(id)arg1 inputMode:(id)arg2 value:(id)arg3 secondaryValue:(id)arg4 realValue:(id)arg5 properties:(id)arg6 creationDate:(id)arg7 lastUpdateDate:(id)arg8;
- (id)inputMode;
- (bool)isMatchForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (bool)isMatchForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (bool)isMatchForKeyPrefix:(id)arg1 forInputMode:(id)arg2 weeklyKeySuffixes:(id)arg3 endDate:(id)arg4;
- (bool)isMatchSinceDate:(id)arg1;
- (id)key;
- (id)lastUpdateDate;
- (id)properties;
- (id)realValue;
- (id)secondaryValue;
- (void)setCreationDate:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRealValue:(id)arg1;
- (void)setSecondaryValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
