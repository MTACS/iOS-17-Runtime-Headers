
@interface GKPlayerActivitySpecialItemInternal : GKInternalRepresentation {
    long long  _activityType;
    NSString * _alternateMessage;
    NSString * _instrumentationKey;
    NSString * _message;
    NSString * _sfSymbol;
    NSDate * _timeStamp;
}

@property (nonatomic) long long activityType;
@property (nonatomic, retain) NSString *alternateMessage;
@property (nonatomic, retain) NSString *instrumentationKey;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *sfSymbol;
@property (nonatomic, retain) NSDate *timeStamp;

+ (id)constantToTypeMap;
+ (id)secureCodedPropertyKeys;
+ (id)typeToConstantMap;

- (void).cxx_destruct;
- (long long)activityType;
- (id)alternateMessage;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)instrumentationKey;
- (id)message;
- (void)setActivityType:(long long)arg1;
- (void)setAlternateMessage:(id)arg1;
- (void)setInstrumentationKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSfSymbol:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)sfSymbol;
- (id)timeStamp;

@end
