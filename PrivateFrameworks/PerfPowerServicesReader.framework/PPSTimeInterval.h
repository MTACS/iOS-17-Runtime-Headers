
@interface PPSTimeInterval : NSObject <NSCopying, NSSecureCoding> {
    double  _endTimestamp;
    NSDictionary * _payload;
    double  _startTimestamp;
}

@property (readonly) NSDictionary *dictionary;
@property (readonly) double duration;
@property (readonly) double endTimestamp;
@property (readonly) NSDictionary *payload;
@property (readonly) double startTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (long long)compare:(id)arg1;
- (bool)containsTimeInterval:(id)arg1;
- (bool)containsTimestamp:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionary;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)endTimestamp;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 payload:(id)arg3;
- (id)intersectionWithTimeInterval:(id)arg1;
- (bool)intersectsTimeInterval:(id)arg1;
- (bool)isAdjacentToTimeInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (double)startTimestamp;
- (id)subtractTimeInterval:(id)arg1;
- (id)unionWithTimeInterval:(id)arg1;

@end
