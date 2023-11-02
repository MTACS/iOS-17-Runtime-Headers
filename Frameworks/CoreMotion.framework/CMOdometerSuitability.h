
@interface CMOdometerSuitability : NSObject <NSCopying, NSSecureCoding, SRSampling> {
    NSDate * _startDate;
    bool  _suitableForRunning;
    bool  _suitableForWalking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool suitableForRunning;
@property (nonatomic, readonly) bool suitableForWalking;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 suitableForRunning:(bool)arg2 suitableForWalking:(bool)arg3;
- (id)startDate;
- (bool)suitableForRunning;
- (bool)suitableForWalking;

@end
