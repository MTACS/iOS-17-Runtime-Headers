
@interface _GDSBalancingAuthorityOutput : NSObject {
    NSUUID * _ID;
    NSString * _identifier;
    NSDate * _lastUpdatedDate;
    double  _latEnd;
    double  _latStart;
    double  _longEnd;
    double  _longStart;
    NSString * _name;
}

@property (nonatomic, readonly) NSUUID *ID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) double latEnd;
@property (nonatomic, readonly) double latStart;
@property (nonatomic, readonly) double longEnd;
@property (nonatomic, readonly) double longStart;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)ID;
- (id)identifier;
- (id)initWithID:(id)arg1 name:(id)arg2 updateDate:(id)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 latitudeStart:(double)arg3 latitudeEnd:(double)arg4 longitudeStart:(double)arg5 longitudeEnd:(double)arg6 updateDate:(id)arg7;
- (id)lastUpdatedDate;
- (double)latEnd;
- (double)latStart;
- (double)longEnd;
- (double)longStart;
- (id)name;

@end
