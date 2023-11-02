
@interface SGEventActivity : NSObject {
    NSString * _teamIdentifier;
    unsigned char  _type;
    NSUserActivity * _userActivity;
    double  _validEndDate;
    double  _validStartDate;
}

@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) double validEndDate;
@property (nonatomic, readonly) double validStartDate;

+ (id)describeType:(unsigned char)arg1;
+ (unsigned char)typeForString:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTeamIdentifier:(id)arg1 type:(unsigned char)arg2 userActivity:(id)arg3 validStartDate:(double)arg4 validEndDate:(double)arg5;
- (id)jsonObject;
- (id)teamIdentifier;
- (unsigned char)type;
- (id)userActivity;
- (double)validEndDate;
- (double)validStartDate;

@end
