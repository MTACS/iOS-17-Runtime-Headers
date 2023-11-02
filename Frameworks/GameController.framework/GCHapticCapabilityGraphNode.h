
@interface GCHapticCapabilityGraphNode : NSObject <GCJSONRepresentable> {
    NSMutableArray * _actuators;
    NSMutableArray * _children;
    bool  _exposed;
    NSString * _label;
}

@property (nonatomic, retain) NSMutableArray *actuators;
@property (nonatomic, retain) NSMutableArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExposed, nonatomic, readonly) bool exposed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actuators;
- (void)addActuator:(id)arg1;
- (void)addChild:(id)arg1;
- (id)children;
- (id)initWithJSONDictionaryRepresentation:(id)arg1;
- (bool)isExposed;
- (id)jsonDictionaryRepresentation;
- (id)label;
- (void)setActuators:(id)arg1;
- (void)setChildren:(id)arg1;

@end
