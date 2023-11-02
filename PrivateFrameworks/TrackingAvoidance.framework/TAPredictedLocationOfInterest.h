
@interface TAPredictedLocationOfInterest : NSObject <OSLogCoding, TAEventProtocol> {
    double  _confidence;
    NSDate * _date;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    NSDate * _nextEntryTime;
    unsigned long long  _referenceFrame;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSDate *nextEntryTime;
@property (nonatomic, readonly) unsigned long long referenceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 confidence:(double)arg5 nextEntryTime:(id)arg6 date:(id)arg7;
- (id)initWithType:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 referenceFrame:(unsigned long long)arg5 confidence:(double)arg6 nextEntryTime:(id)arg7 date:(id)arg8;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)nextEntryTime;
- (unsigned long long)referenceFrame;
- (unsigned long long)type;

@end
