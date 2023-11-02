
@interface WFLocationParameter : WFParameter <WFModuleSummarySupporting> {
    bool  _allowsCurrentLocation;
    bool  _allowsTextOnlyLocations;
    bool  _defaultToCurrentLocation;
    bool  _skipsProcessingCurrentLocation;
}

@property (nonatomic, readonly) bool allowsCurrentLocation;
@property (nonatomic, readonly) bool allowsTextOnlyLocations;
@property (nonatomic, readonly) double currentLocationAccuracy;
@property (nonatomic, readonly) bool defaultToCurrentLocation;
@property (nonatomic, readonly) bool skipsProcessingCurrentLocation;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)allowsCurrentLocation;
- (bool)allowsTextOnlyLocations;
- (double)currentLocationAccuracy;
- (id)defaultSerializedRepresentation;
- (bool)defaultToCurrentLocation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (bool)skipsProcessingCurrentLocation;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotForState:(id)arg1;

@end
