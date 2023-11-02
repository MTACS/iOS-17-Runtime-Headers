
@interface TIUserModelDataStoreEntry : NSObject {
    NSString * _inputMode;
    NSString * _key;
    NSData * _properties;
    NSNumber * _realValue;
    NSNumber * _secondaryValue;
    NSDate * _timestamp;
    NSNumber * _value;
}

@property (retain) NSString *inputMode;
@property (retain) NSString *key;
@property (retain) NSData *properties;
@property (retain) NSNumber *realValue;
@property (retain) NSNumber *secondaryValue;
@property (retain) NSDate *timestamp;
@property (retain) NSNumber *value;

- (void).cxx_destruct;
- (id)initWithTimestamp:(id)arg1 withKey:(id)arg2 withInputMode:(id)arg3 withValue:(id)arg4 withSecondaryValue:(id)arg5 withRealValue:(id)arg6 withProperties:(id)arg7;
- (id)inputMode;
- (id)key;
- (id)properties;
- (id)realValue;
- (id)secondaryValue;
- (void)setInputMode:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRealValue:(id)arg1;
- (void)setSecondaryValue:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setValue:(id)arg1;
- (id)timestamp;
- (id)value;

@end
