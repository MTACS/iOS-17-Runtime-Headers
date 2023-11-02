
@interface LAPSPasscodeChangePreflightController : NSObject <LAPSPasscodeChangePreflightController> {
    <LAPSPasscodeChangeSystem> * _system;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canChangePasscodeWithError:(id*)arg1;
- (id)initWithSystem:(id)arg1;
- (id)lastPasscodeChange;

@end
