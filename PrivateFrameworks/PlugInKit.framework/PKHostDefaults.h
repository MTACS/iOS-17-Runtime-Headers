
@interface PKHostDefaults : NSUserDefaults {
    PKHostPlugIn * _plugin;
}

@property PKHostPlugIn *plugin;

- (void).cxx_destruct;
- (id)initWithPlugIn:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)plugin;
- (void)registerDefaults:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPlugin:(id)arg1;
- (bool)synchronize;

@end
