
@interface SBSDefaultInfo : NSObject <NSSecureCoding> {
    unsigned long long  _defaultType;
    NSObject * _defaultValue;
    bool  _isBool;
    bool  _isDouble;
    NSNumber * _rangeMax;
    NSNumber * _rangeMin;
    bool  _requiresReinit;
    NSString * _stringForUserDefault;
    NSString * _userDescription;
}

@property (nonatomic) unsigned long long defaultType;
@property (readonly) NSObject *defaultValue;
@property (readonly) bool isBool;
@property (readonly) bool isDouble;
@property (readonly) NSNumber *rangeMax;
@property (readonly) NSNumber *rangeMin;
@property (readonly) bool requiresReinit;
@property (readonly) NSString *stringForUserDefault;
@property (readonly) NSString *userDescription;
@property (readonly) NSString *valueType;

+ (id)defaultsName:(id)arg1 asBool:(id)arg2;
+ (id)defaultsName:(id)arg1 asBool:(id)arg2 userInfo:(id)arg3 requiresReinit:(bool)arg4;
+ (id)defaultsName:(id)arg1 asDouble:(id)arg2;
+ (id)defaultsName:(id)arg1 asDouble:(id)arg2 rangeMin:(id)arg3 rangeMax:(id)arg4;
+ (id)defaultsName:(id)arg1 asDouble:(id)arg2 rangeMin:(id)arg3 rangeMax:(id)arg4 userInfo:(id)arg5 requiresReinit:(bool)arg6;
+ (id)defaultsName:(id)arg1 asDouble:(id)arg2 userInfo:(id)arg3 requiresReinit:(bool)arg4;
+ (id)defaultsName:(id)arg1 asInt:(id)arg2;
+ (id)defaultsName:(id)arg1 asInt:(id)arg2 rangeMin:(id)arg3 rangeMax:(id)arg4;
+ (id)defaultsName:(id)arg1 asInt:(id)arg2 rangeMin:(id)arg3 rangeMax:(id)arg4 userInfo:(id)arg5 requiresReinit:(bool)arg6;
+ (id)defaultsName:(id)arg1 asInt:(id)arg2 userInfo:(id)arg3 requiresReinit:(bool)arg4;
+ (id)defaultsName:(id)arg1 asString:(id)arg2;
+ (id)defaultsName:(id)arg1 asString:(id)arg2 userInfo:(id)arg3 requiresReinit:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)defaultType;
- (id)defaultValue;
- (void)encodeWithCoder:(id)arg1;
- (id)getHumanReadable:(id)arg1 isDefaultSet:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isBool;
- (bool)isDouble;
- (id)rangeMax;
- (id)rangeMin;
- (bool)requiresReinit;
- (void)setDefaultType:(unsigned long long)arg1;
- (id)stringForUserDefault;
- (id)userDescription;
- (id)valueType;

@end
