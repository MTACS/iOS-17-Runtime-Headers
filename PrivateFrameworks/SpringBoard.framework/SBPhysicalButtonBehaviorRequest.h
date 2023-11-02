
@interface SBPhysicalButtonBehaviorRequest : NSObject {
    unsigned long long  _generation;
    unsigned long long  _identifier;
    unsigned long long  _physicalButtonBehavior;
    FBScene * _scene;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) unsigned long long physicalButtonBehavior;
@property (nonatomic, readonly) FBScene *scene;

- (void).cxx_destruct;
- (unsigned long long)generation;
- (unsigned long long)identifier;
- (id)initWithPhysicalButtonConfiguration:(id)arg1 generation:(unsigned long long)arg2 identifier:(unsigned long long)arg3 scene:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)physicalButtonBehavior;
- (id)scene;

@end
