
@interface MapsSuggestionsETA : NSObject <MapsSuggestionsJSONable, NSCopying, NSSecureCoding> {
    CLLocation * _location;
    NSString * _longTrafficString;
    NSString * _originator;
    double  _seconds;
    NSString * _shortTrafficString;
    NSString * _spokenRouteName;
    NSDate * _time;
    int  _transportType;
    NSString * _writtenRouteName;
}

@property (nonatomic, readonly) double age;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *longTrafficString;
@property (nonatomic, readonly) NSString *originator;
@property (nonatomic, readonly) double seconds;
@property (nonatomic, readonly) NSString *shortTrafficString;
@property (nonatomic, readonly) NSString *spokenRouteName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSString *writtenRouteName;

+ (id)ETAWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)age;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 originator:(id)arg9;
- (id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4;
- (bool)isBetterThanETA:(id)arg1 requirements:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToETA:(id)arg1;
- (bool)isValidForLocation:(id)arg1 requirements:(id)arg2;
- (id)location;
- (id)longTrafficString;
- (id)nameForJSON;
- (id)objectForJSON;
- (id)originator;
- (double)seconds;
- (id)shortTrafficString;
- (id)spokenRouteName;
- (id)time;
- (id)trafficString;
- (int)transportType;
- (id)writtenRouteName;

@end
