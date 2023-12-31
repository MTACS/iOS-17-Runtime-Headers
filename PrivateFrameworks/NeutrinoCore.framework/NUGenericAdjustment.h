
@interface NUGenericAdjustment : NUAdjustment {
    NSMutableDictionary * _settings;
}

@property (nonatomic, copy) NSDictionary *settings;

- (void).cxx_destruct;
- (id)initWithAdjustmentSchema:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)settings;
- (id)valueForKey:(id)arg1;

@end
