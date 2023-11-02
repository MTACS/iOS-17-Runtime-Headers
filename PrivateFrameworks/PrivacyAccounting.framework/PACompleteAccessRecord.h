
@interface PACompleteAccessRecord : NSObject <PAAccessRecord> {
    PAAccess * _access;
    double  _endTime;
    double  _startTime;
}

@property (nonatomic, readonly) PAAccess *access;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)access;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (unsigned long long)hash;
- (id)initWithAccess:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccessRecord:(id)arg1;
- (double)startTime;

@end
