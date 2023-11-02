
@interface WFWorkoutType : NSObject {
    unsigned long long  _activityType;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)allTypes;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (id)initWithActivityType:(unsigned long long)arg1;
- (id)name;

@end
