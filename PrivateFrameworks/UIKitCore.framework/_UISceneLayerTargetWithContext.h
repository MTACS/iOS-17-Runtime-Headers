
@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget> {
    id /* block */  _block;
    id  _context;
    unsigned long long  _equalityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (bool)matchesLayer:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
