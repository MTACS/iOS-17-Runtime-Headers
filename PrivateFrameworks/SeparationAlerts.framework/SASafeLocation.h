
@interface SASafeLocation : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    NSUUID * _identifier;
    double  _latitude;
    double  _longitude;
    NSString * _name;
    double  _radius;
    unsigned long long  _referenceFrame;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) unsigned long long referenceFrame;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationUUID:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 referenceFrame:(unsigned long long)arg5 name:(id)arg6 date:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isReallyEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)name;
- (double)radius;
- (unsigned long long)referenceFrame;

@end
