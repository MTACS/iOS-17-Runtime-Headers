
@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    long long  _modeOfTransportation;
    NSDate * _startDate;
    NSDate * _stopDate;
    NSUUID * _visitIdentifierDestination;
    NSUUID * _visitIdentifierOrigin;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long modeOfTransportation;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSDate *stopDate;
@property (nonatomic, readonly) NSUUID *visitIdentifierDestination;
@property (nonatomic, readonly) NSUUID *visitIdentifierOrigin;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (long long)modeOfTransportation;
- (id)startDate;
- (id)stopDate;
- (id)visitIdentifierDestination;
- (id)visitIdentifierOrigin;

@end
