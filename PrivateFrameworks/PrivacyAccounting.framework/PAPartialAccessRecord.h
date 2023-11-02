
@interface PAPartialAccessRecord : NSObject <PAAccessRecord> {
    PAAccess * _access;
    double  _endTime;
}

@property (nonatomic, readonly) PAAccess *access;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)access;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (unsigned long long)hash;
- (id)initWithAccess:(id)arg1 endTime:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
