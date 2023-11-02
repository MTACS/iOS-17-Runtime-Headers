
@interface WFNextHourPrecipitationDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _longTemplate;
    NSDictionary * _parameters;
    NSString * _shortTemplate;
    NSString * _token;
    NSDate * _validUntil;
}

@property (nonatomic, readonly) NSString *longDescription;
@property (nonatomic, copy) NSString *longTemplate;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, copy) NSString *shortTemplate;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, readonly, copy) NSDate *validUntil;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillTemplate:(id)arg1 withDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortTemplate:(id)arg1 longTemplate:(id)arg2 parameters:(id)arg3 validUntil:(id)arg4;
- (id)initWithToken:(id)arg1 shortTemplate:(id)arg2 longTemplate:(id)arg3 parameters:(id)arg4 validUntil:(id)arg5;
- (bool)isValidAtDate:(id)arg1;
- (id)longDescription;
- (id)longTemplate;
- (id)parameters;
- (void)setLongTemplate:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setShortTemplate:(id)arg1;
- (void)setToken:(id)arg1;
- (id)shortDescription;
- (id)shortTemplate;
- (id)token;
- (id)validUntil;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end
