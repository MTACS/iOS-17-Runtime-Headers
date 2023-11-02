
@interface RealityKit.RKAREnvironmentProbeAnchor : AREnvironmentProbeAnchor {
    void delegate;
    void priority;
    void refreshInterval;
    void weight;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithIdentifier:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 name:(id)arg3;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 name:(id)arg3 hiddenFromPublicDelegate:(bool)arg4;
- (id)initWithName:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithName:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)initWithTransform:(void *)arg1 extent:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }

@end
