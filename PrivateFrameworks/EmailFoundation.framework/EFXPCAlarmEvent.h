
@interface EFXPCAlarmEvent : NSObject {
    NSDate * _fireDate;
    bool  _isUserVisible;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSDate *fireDate;
@property (nonatomic, readonly) bool isUserVisible;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)_eventWithName:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)fireDate;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUserVisible;
- (id)name;

@end
