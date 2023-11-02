
@interface SPIPowerLogger : NSObject {
    int  pid;
    unsigned char  process;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned char process;

// Image: /System/Library/PrivateFrameworks/SiriPowerInstrumentation.framework/SiriPowerInstrumentation

- (id)captureSnapshot;
- (id)init;
- (id)initWithCurrentProcess;
- (id)initWithProcessIdentifier:(int)arg1;
- (int)pid;
- (unsigned char)process;

// Image: /System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService

+ (id)loggerForCurrentProcess;

@end
