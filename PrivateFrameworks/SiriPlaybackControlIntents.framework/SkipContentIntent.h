
@interface SkipContentIntent : INIntent

@property (nonatomic, copy) TVRDevice *device;
@property (nonatomic) long long skipCommand;
@property (nonatomic, copy) NSNumber *skipDuration;

@end
