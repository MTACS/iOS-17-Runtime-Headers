
@interface GCDevicePhysicalInputViewDescription : NSObject {
    NSMutableDictionary * _additionalConfiguration;
}

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void).cxx_destruct;
- (id)init;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)validate:(out id*)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
