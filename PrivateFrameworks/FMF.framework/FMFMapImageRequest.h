
@interface FMFMapImageRequest : NSObject <NSSecureCoding> {
    double  _altitude;
    bool  _cachingEnabled;
    double  _height;
    bool  _isShifted;
    CLLocation * _location;
    double  _pitch;
    long long  _priority;
    double  _radius;
    double  _width;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool cachingEnabled;
@property (nonatomic) double height;
@property (nonatomic) bool isShifted;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) double pitch;
@property (nonatomic) long long priority;
@property (nonatomic) double radius;
@property (nonatomic) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (bool)cachingEnabled;
- (void)encodeWithCoder:(id)arg1;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(bool)arg6;
- (id)initWithLocation:(id)arg1 isShifted:(bool)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 height:(double)arg6 andCachingEnabled:(bool)arg7;
- (id)initWithLocation:(id)arg1 isShifted:(bool)arg2 radius:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(bool)arg6;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 width:(double)arg3 height:(double)arg4 andCachingEnabled:(bool)arg5;
- (bool)isShifted;
- (id)key;
- (id)location;
- (double)pitch;
- (long long)priority;
- (double)radius;
- (void)setAltitude:(double)arg1;
- (void)setCachingEnabled:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setIsShifted:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPitch:(double)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRadius:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
