
@interface EXUIKit_Subsystem : NSObject <PKModularService> {
    NSDictionary * _infoDictionary;
    bool  _initialized;
    bool  _plugInKitProcess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (getter=isPlugInKitProcess, nonatomic) bool plugInKitProcess;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)initForPlugInKitWithOptions:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;
- (id)infoDictionary;
- (bool)isPlugInKitProcess;
- (void)setInfoDictionary:(id)arg1;
- (void)setPlugInKitProcess:(bool)arg1;

@end
