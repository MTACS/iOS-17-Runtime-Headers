
@interface WFTimeInterval : NSObject <NSCopying, NSSecureCoding, WFSerializableContent> {
    unsigned long long  _allowedUnits;
    unsigned long long  _hash;
    double  _timeInterval;
    NSDateComponentsFormatter * _timeIntervalFormatter;
    long long  _unitsStyle;
    unsigned long long  _zeroFormattingBehavior;
}

@property (nonatomic, readonly) NSString *absoluteTimeString;
@property (nonatomic, readonly) unsigned long long allowedUnits;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) NSDateComponentsFormatter *timeIntervalFormatter;
@property (nonatomic, readonly) long long unitsStyle;
@property (nonatomic, readonly) unsigned long long zeroFormattingBehavior;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)absoluteTimeString;
- (unsigned long long)allowedUnits;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (id)initWithTimeInterval:(double)arg1 allowedUnits:(unsigned long long)arg2 unitsStyle:(long long)arg3 zeroFormattingBehavior:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (double)timeInterval;
- (id)timeIntervalFormatter;
- (long long)unitsStyle;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (unsigned long long)zeroFormattingBehavior;

@end
