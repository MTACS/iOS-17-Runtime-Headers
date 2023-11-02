
@interface PCLockscreenControlsDevice : NSObject <NSSecureCoding> {
    NSNumber * _distance;
    NSString * _mediaRouteID;
}

@property (nonatomic, retain) NSNumber *distance;
@property (nonatomic, retain) NSString *mediaRouteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRouteID:(id)arg1 distance:(id)arg2;
- (id)mediaRouteID;
- (void)setDistance:(id)arg1;
- (void)setMediaRouteID:(id)arg1;

@end
