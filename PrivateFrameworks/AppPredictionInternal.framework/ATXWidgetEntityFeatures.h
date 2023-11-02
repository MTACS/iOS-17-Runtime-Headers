
@interface ATXWidgetEntityFeatures : NSObject <ATXJSONSerializableProtocol> {
    NSNumber * _parentAppGlobalPrior;
    NSNumber * _parentAppScore;
    NSNumber * _widgetGlobalPrior;
}

@property (nonatomic, retain) NSNumber *parentAppGlobalPrior;
@property (nonatomic, retain) NSNumber *parentAppScore;
@property (nonatomic, retain) NSNumber *widgetGlobalPrior;

- (void).cxx_destruct;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)jsonRepresentation;
- (id)parentAppGlobalPrior;
- (id)parentAppScore;
- (void)setParentAppGlobalPrior:(id)arg1;
- (void)setParentAppScore:(id)arg1;
- (void)setWidgetGlobalPrior:(id)arg1;
- (id)widgetGlobalPrior;

@end
