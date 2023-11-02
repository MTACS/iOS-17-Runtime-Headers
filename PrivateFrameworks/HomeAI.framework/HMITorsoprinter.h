
@interface HMITorsoprinter : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct __CVBuffer { }*)createTorsoPixelBufferForTorsoEvent:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
+ (id)currentModelUUID;
+ (unsigned long long)currentTorsoRequestRevision;
+ (id)logCategory;

- (id)torsoprintForTorsoPixelBuffer:(struct __CVBuffer { }*)arg1 unrecognizable:(bool)arg2 error:(id*)arg3;

@end
