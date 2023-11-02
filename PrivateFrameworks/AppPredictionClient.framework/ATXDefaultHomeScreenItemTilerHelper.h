
@interface ATXDefaultHomeScreenItemTilerHelper : NSObject {
    NSMutableSet * _usedBundleIds;
    NSMutableSet * _usedSpecialKinds;
}

- (void).cxx_destruct;
- (bool)_isSpecialAvocadoDescriptorKind:(id)arg1;
- (bool)_isWidgetAlreadyUsed:(id)arg1;
- (void)_markWidgetAsUsed:(id)arg1;
- (id)filterForNextUnusedWidgetDescriptor:(id)arg1;
- (id)init;
- (void)unmarkWidgetAsUsed:(id)arg1;

@end
