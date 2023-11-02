
@interface NSMeasurement : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {
    double  _doubleValue;
    NSUnit * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSUnit *unit;
@property (nonatomic, retain) NSNumber *wf_preferredValueRounding;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_performOperation:(long long)arg1 withMeasurement:(id)arg2;
- (bool)canBeConvertedToUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)measurementByConvertingToUnit:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;
- (id)unit;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentQuantity;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (void)setWf_preferredValueRounding:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wf_preferredValueRounding;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_distanceMeasurementForMeters:(double)arg1;

// Image: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage

- (long long)compare:(id)arg1;
- (bool)isEqualToMeasurement:(id)arg1;
- (bool)isGreaterThanMeasurement:(id)arg1;
- (bool)isGreaterThanOrEqualToMeasurement:(id)arg1;
- (bool)isLessThanMeasurement:(id)arg1;
- (bool)isLessThanOrEqualToMeasurement:(id)arg1;

@end
