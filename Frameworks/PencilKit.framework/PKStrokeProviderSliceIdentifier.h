
@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier> {
    NSUUID * _strokeUUID;
    double  _tEnd;
    double  _tStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *strokeUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tEnd;
@property (nonatomic, readonly) double tStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)strokeUUID;
- (double)tEnd;
- (double)tStart;

@end
