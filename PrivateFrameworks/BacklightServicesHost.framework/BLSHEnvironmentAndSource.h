
@interface BLSHEnvironmentAndSource : NSObject {
    <BLSHBacklightSceneHostEnvironment> * _environment;
    id  _environmentSource;
}

@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, readonly) id environmentSource;

- (void).cxx_destruct;
- (id)environment;
- (id)environmentSource;
- (id)initWithEnvironment:(id)arg1 environmentSource:(id)arg2;

@end
