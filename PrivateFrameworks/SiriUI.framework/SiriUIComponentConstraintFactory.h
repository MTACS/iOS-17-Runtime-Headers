
@interface SiriUIComponentConstraintFactory : NSObject {
    NSMutableDictionary * _layoutStyleToComponentLayoutMaps;
}

+ (id)sharedConstraintFactory;

- (void).cxx_destruct;
- (void)_addConstants:(id)arg1 forLowerComponentStyle:(unsigned long long)arg2 toMap:(id)arg3;
- (id)_bestDistanceFromComponentType:(unsigned long long)arg1 toComponentType:(unsigned long long)arg2 layoutStyle:(long long)arg3;
- (unsigned long long)_componentTypeForView:(id)arg1 component:(id)arg2;
- (id)_createMapForLayoutStyle:(long long)arg1;
- (long long)_layoutAttributeForView:(id)arg1 componentType:(unsigned long long)arg2 isLower:(bool)arg3;
- (void)_setupMaps;
- (id)bottomConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)bottomConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)init;
- (id)topConstraintForView:(id)arg1 fromLayoutGuide:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)topConstraintForView:(id)arg1 inSuperview:(id)arg2 templateComponent:(id)arg3 layoutStyle:(long long)arg4;
- (id)verticalConstraintFromUpperView:(id)arg1 lowerView:(id)arg2 upperTemplateComponent:(id)arg3 lowerTemplateComponent:(id)arg4 layoutStyle:(long long)arg5;

@end
