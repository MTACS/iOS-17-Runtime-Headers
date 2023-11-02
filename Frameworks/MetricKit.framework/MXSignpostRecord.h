
@interface MXSignpostRecord : NSObject <NSSecureCoding> {
    NSDate * _beginTimeStamp;
    NSString * _category;
    NSMeasurement * _duration;
    NSDate * _endTimeStamp;
    bool  _isInterval;
    NSString * _name;
    NSString * _subsystem;
}

@property (copy) NSDate *beginTimeStamp;
@property (copy) NSString *category;
@property (copy) NSMeasurement *duration;
@property (copy) NSDate *endTimeStamp;
@property bool isInterval;
@property (copy) NSString *name;
@property (copy) NSString *subsystem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)beginTimeStamp;
- (id)category;
- (id)dictionaryRepresentation;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeStamp;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubSystem:(id)arg1 category:(id)arg2 name:(id)arg3 beginTimeStamp:(id)arg4 endTimeStamp:(id)arg5 duration:(id)arg6 isInterval:(bool)arg7;
- (bool)isInterval;
- (id)name;
- (void)setBeginTimeStamp:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEndTimeStamp:(id)arg1;
- (void)setIsInterval:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (id)subsystem;
- (id)toDictionary;

@end
