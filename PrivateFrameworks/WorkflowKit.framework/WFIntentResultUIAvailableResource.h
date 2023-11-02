
@interface WFIntentResultUIAvailableResource : WFResource {
    bool  _hasSuccessResponseWithDialog;
    INIntentDescriptor * _resolvedIntentDescriptor;
}

@property (nonatomic, readonly) bool hasSuccessResponseWithDialog;
@property (nonatomic, readonly) INIntentDescriptor *resolvedIntentDescriptor;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (bool)hasSuccessResponseWithDialog;
- (id)initWithDefinition:(id)arg1;
- (id)initWithDefinition:(id)arg1 resolvedIntentDescriptor:(id)arg2 hasSuccessResponseWithDialog:(bool)arg3;
- (void)refreshAvailability;
- (id)resolvedIntentDescriptor;

@end
