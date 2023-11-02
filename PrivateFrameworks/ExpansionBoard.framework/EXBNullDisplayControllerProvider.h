
@interface EXBNullDisplayControllerProvider : NSObject <EXBDisplayControllerProviding> {
    NSMutableDictionary * _createdControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controllerForDisplay:(id)arg1;
- (bool)didCreateControllers;
- (id)displayControllerForDisplay:(id)arg1 configuration:(id)arg2;
- (id)init;

@end
