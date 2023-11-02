
@interface INIntentTestResolvedParameter : NSObject {
    INExtensionContextSlotResolutionResult * _extensionContextResolutionResult;
    INIntent * _intent;
    NSString * _parameter;
    bool  _resolveImplemented;
    NSArray * _results;
    INIntentSlotDescription * _slotDescription;
}

@property (nonatomic, readonly) INExtensionContextSlotResolutionResult *extensionContextResolutionResult;
@property (nonatomic, readonly, copy) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *parameter;
@property (nonatomic, readonly) bool resolveImplemented;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) INIntentSlotDescription *slotDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)extensionContextResolutionResult;
- (id)initWithParameter:(id)arg1 forIntent:(id)arg2 extensionContextResolutionResult:(id)arg3;
- (id)intent;
- (id)parameter;
- (bool)resolveImplemented;
- (id)results;
- (id)slotDescription;

@end
