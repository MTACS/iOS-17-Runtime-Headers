
@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        bool abbreviatedUnits; 
        long long distanceDetailLevel; 
        bool spoken; 
        bool dropTimestampAMPM; 
        bool rightToLeft; 
        double referenceDate; 
    }  _options;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) struct { bool x1; long long x2; bool x3; bool x4; bool x5; double x6; } options;
@property (nonatomic, readonly, copy) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;
- (id)initWithOptions:(struct { bool x1; long long x2; bool x3; bool x4; bool x5; double x6; })arg1 variableOverrides:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServerFormattedStringParameters:(id)arg1;
- (struct { bool x1; long long x2; bool x3; bool x4; bool x5; double x6; })options;
- (id)variableOverrides;

@end
