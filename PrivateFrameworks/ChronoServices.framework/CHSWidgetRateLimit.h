
@interface CHSWidgetRateLimit : NSObject <BSDescriptionStreamable, NSSecureCoding> {
    unsigned long long  _maximum;
    double  _windowInSeconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumRefreshes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double window;

+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumRefreshes:(unsigned long long)arg1 perWindow:(double)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumRefreshes;
- (double)window;

@end
