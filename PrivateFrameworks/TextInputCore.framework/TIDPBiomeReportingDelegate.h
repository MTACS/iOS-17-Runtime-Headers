
@interface TIDPBiomeReportingDelegate : NSObject <TIDPReportingDelegate> {
    BMSource * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_BMEventWithKeyboardTokenFrequency:(id)arg1 withLocale:(id)arg2 withTokenType:(id)arg3;

- (void).cxx_destruct;
- (id)init;
- (bool)record:(id)arg1;
- (bool)recordTokenFrequency:(id)arg1 withLocale:(id)arg2 withTokenType:(id)arg3;

@end
