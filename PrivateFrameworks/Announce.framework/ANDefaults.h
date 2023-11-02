
@interface ANDefaults : NSObject <ANDefaultsProtocol> {
    NSUserDefaults * _defaults;
    NSDictionary * _defaultsItems;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, readonly) NSDictionary *defaultsItems;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)boolForDefault:(id)arg1;
- (id)defaults;
- (id)defaultsItems;
- (id)init;
- (id)numberForDefault:(id)arg1;
- (id)objectForDefault:(id)arg1;
- (void)setBool:(bool)arg1 forDefault:(id)arg2;
- (void)setDefaults:(id)arg1;
- (void)setNumber:(id)arg1 forDefault:(id)arg2;
- (void)setObject:(id)arg1 forDefault:(id)arg2;

@end
