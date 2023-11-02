
@interface SPIPowerLoggerSnapshot : NSObject {
    unsigned long long  _captureTimestamp;
    SPIPowerLogger * _powerLogger;
    struct SPIResourceUsage { 
        unsigned long long cpuCycles; 
        unsigned long long cpuInstructions; 
        unsigned long long memPhysFootprint; 
    }  _usage;
}

@property (nonatomic, readonly) unsigned long long captureTimestamp;
@property (nonatomic, readonly) SPIPowerLogger *powerLogger;
@property (nonatomic, readonly) struct SPIResourceUsage { unsigned long long x1; unsigned long long x2; unsigned long long x3; } usage;

- (void).cxx_destruct;
- (void)buildAndEmitWithMessageBuilder:(id)arg1 eventContext:(id)arg2;
- (unsigned long long)captureTimestamp;
- (id)init;
- (id)initWithPowerLogger:(id)arg1 usage:(struct SPIResourceUsage { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 captureTimestamp:(unsigned long long)arg3;
- (void)logWithEventContext:(id)arg1;
- (void)logWithEventContext:(id)arg1 asrIdentifier:(id)arg2;
- (void)logWithEventContext:(id)arg1 componentName:(int)arg2 identifier:(id)arg3;
- (void)logWithEventContext:(id)arg1 requestIdentifier:(id)arg2;
- (void)logWithEventContext:(id)arg1 ttsIdentifier:(id)arg2;
- (void)logWithEventContext:(id)arg1 turnIdentifier:(id)arg2;
- (id)powerLogger;
- (struct SPIResourceUsage { unsigned long long x1; unsigned long long x2; unsigned long long x3; })usage;

@end
