
@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _entryDate;
    NSDate * _exitDate;
    NSUUID * _identifier;
    RTLocation * _location;
    double  _locationOfInterestConfidence;
    unsigned long long  _locationOfInterestSource;
}

@property (nonatomic, readonly) NSDate *entryDate;
@property (nonatomic, readonly) NSDate *exitDate;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) double locationOfInterestConfidence;
@property (nonatomic, readonly) unsigned long long locationOfInterestSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (id)entryDate;
- (id)entryTime;
- (id)exit;
- (id)exitDate;
- (id)exitTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3 location:(id)arg4 locationOfInterestConfidence:(double)arg5 locationOfInterestSource:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)location;
- (double)locationOfInterestConfidence;
- (unsigned long long)locationOfInterestSource;

@end
