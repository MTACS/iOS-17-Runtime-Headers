
@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary * _alsEvents;
}

- (void)dealloc;
- (bool)displayBrightnessFactorPropertyHandler:(id)arg1;
- (id)filterEvent:(id)arg1;
- (void)forgetDataForService:(struct __IOHIDServiceClient { }*)arg1;
- (id)init;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;

@end
