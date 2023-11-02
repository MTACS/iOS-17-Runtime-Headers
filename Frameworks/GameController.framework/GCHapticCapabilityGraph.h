
@interface GCHapticCapabilityGraph : NSObject <GCJSONRepresentable, NSSecureCoding> {
    NSMutableSet * _allCapabilities;
    NSMutableSet * _allLeafCapabilities;
    NSMutableSet * _exposedCapabilities;
    NSMutableSet * _exposedLeafCapabilities;
    NSMutableDictionary * _nodes;
}

@property (nonatomic, retain) NSMutableSet *allCapabilities;
@property (nonatomic, retain) NSMutableSet *allLeafCapabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *exposedCapabilities;
@property (nonatomic, retain) NSMutableSet *exposedLeafCapabilities;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodes;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actuatorsForNode:(id)arg1;
- (id)allCapabilities;
- (id)allLeafCapabilities;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exposedCapabilities;
- (id)exposedLeafCapabilities;
- (id)initWithActuators:(id)arg1 nodes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionaryRepresentation:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)nodes;
- (void)setAllCapabilities:(id)arg1;
- (void)setAllLeafCapabilities:(id)arg1;
- (void)setExposedCapabilities:(id)arg1;
- (void)setExposedLeafCapabilities:(id)arg1;
- (void)setNodes:(id)arg1;

@end
