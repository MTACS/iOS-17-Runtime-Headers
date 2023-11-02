
@interface HFMeasurementFormatter : NSMeasurementFormatter <HFUnitFormatter> {
    id /* block */  _measurementBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ measurementBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unitDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMeasurementBlock:(id /* block */)arg1;
- (id /* block */)measurementBlock;
- (void)setMeasurementBlock:(id /* block */)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 withUnit:(bool)arg2;
- (id)unitDescription;

@end
