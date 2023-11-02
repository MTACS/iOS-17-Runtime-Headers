
@interface PTMTLDropHints : NSObject {
    int  _count;
    bool  _enabled;
    NSString * _name;
    <MTLResourceGroupSPI> * _resourceGroup;
}

@property bool enabled;

- (void).cxx_destruct;
- (void)dropHintsFor:(id)arg1;
- (bool)enabled;
- (id)initWithMetalContext:(id)arg1 resources:(id)arg2 name:(id)arg3;
- (id)initWithMetalContext:(id)arg1 resources:(id)arg2 name:(id)arg3 enabled:(bool)arg4;
- (void)setDropHintsFor:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
