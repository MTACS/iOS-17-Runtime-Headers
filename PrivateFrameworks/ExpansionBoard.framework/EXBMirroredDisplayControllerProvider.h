
@interface EXBMirroredDisplayControllerProvider : NSObject <EXBDisplayControllerProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)displayControllerForDisplay:(id)arg1 configuration:(id)arg2;

@end
