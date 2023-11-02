
@interface BKSTouchAuthenticationSpecification : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _authenticationMessageContext;
    unsigned short  _backgroundStatisticsBottomEdgeInset;
    float  _backgroundStatisticsFailingContrast;
    float  _backgroundStatisticsForeground;
    unsigned short  _backgroundStatisticsLeftEdgeInset;
    float  _backgroundStatisticsPassingContrast;
    unsigned short  _backgroundStatisticsRightEdgeInset;
    unsigned short  _backgroundStatisticsTopEdgeInset;
    NSSet * _displays;
    unsigned long long  _hitTestInformationMask;
    long long  _initialSampleEvent;
    unsigned int  _secureName;
    unsigned int  _slotID;
}

@property (nonatomic, readonly) unsigned long long authenticationMessageContext;
@property (nonatomic, readonly) float backgroundStatisticsFailingContrast;
@property (nonatomic, readonly) float backgroundStatisticsForeground;
@property (nonatomic, readonly) float backgroundStatisticsPassingContrast;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } backgroundStatisticsRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hitTestInformationMask;
@property (nonatomic, readonly) long long initialSampleEvent;
@property (nonatomic, readonly) unsigned int secureName;
@property (nonatomic, readonly) unsigned int slotID;
@property (readonly) Class superclass;

+ (id)buildSpecification:(id /* block */)arg1;
+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)authenticationMessageContext;
- (float)backgroundStatisticsFailingContrast;
- (float)backgroundStatisticsForeground;
- (float)backgroundStatisticsPassingContrast;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })backgroundStatisticsRegion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displays;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hitTestInformationMask;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (long long)initialSampleEvent;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)secureName;
- (unsigned int)slotID;

@end
