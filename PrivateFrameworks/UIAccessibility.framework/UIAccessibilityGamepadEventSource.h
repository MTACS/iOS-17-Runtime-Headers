
@interface UIAccessibilityGamepadEventSource : NSObject <_GCGamepadEventSource, _GCImplicitIPCObject> {
    NSMutableArray * _handlers;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)observeGamepadEvents:(id /* block */)arg1;
- (void)publishGamepadEvent:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
