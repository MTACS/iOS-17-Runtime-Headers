
@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding> {
    RTLocation * _endLocation;
    NSArray * _expectedVisits;
    RTLocation * _startLocation;
}

@property (nonatomic, readonly) RTLocation *endLocation;
@property (nonatomic, readonly) NSArray *expectedVisits;
@property (nonatomic, readonly) RTLocation *startLocation;

+ (id)getVisitsFromVisitsDescriptionData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)visitsDescriptionDataAtPath:(id)arg1;
+ (bool)visitsOverlapping:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endLocation;
- (id)expectedVisits;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3;
- (id)initWithVisitsDescriptionPListPath:(id)arg1;
- (id)startLocation;

@end
