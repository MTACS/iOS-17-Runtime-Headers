
@interface WFUnitVariableAggrandizement : WFVariableAggrandizement {
    NSUnit * _unit;
}

@property (nonatomic, readonly) NSUnit *unit;
@property (nonatomic, readonly) NSString *unitType;

- (void).cxx_destruct;
- (void)applyToContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)availableUnits;
- (id)initWithUnit:(id)arg1 unitType:(id)arg2;
- (id)processedContentClasses:(id)arg1;
- (id)unit;
- (id)unitType;

@end
