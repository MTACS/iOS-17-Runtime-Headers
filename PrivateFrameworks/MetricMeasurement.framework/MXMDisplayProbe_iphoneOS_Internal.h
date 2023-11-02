
@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform> {
    <MXMDisplayProbePlatformDelegate> * _delegate;
    MXMDisplayDescriptor * _displayDescriptor;
    struct { 
        double timestamp; 
        unsigned long long frameCount; 
    }  _lastSample;
    double  _pollRate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MXMDisplayProbePlatformDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allDescriptors;
+ (unsigned long long)_displayIndexWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (void)_loop;
- (struct { double x1; unsigned long long x2; })_pollDisplayForSample;
- (void)_pollMain;
- (void)_start;
- (void)_stop;
- (id)delegate;
- (id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
