
@interface NTKCompanionApricotComplicationRecord : NSObject {
    NSString * _appName;
    CLKComplicationDescriptor * _complicationDescriptor;
    NSString * _displayName;
    NSArray * _supportedClockKitFamilies;
    CLKWidgetComplicationDescriptor * _widgetDescriptor;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) CLKComplicationDescriptor *complicationDescriptor;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *supportedClockKitFamilies;
@property (nonatomic, retain) CLKWidgetComplicationDescriptor *widgetDescriptor;

- (void).cxx_destruct;
- (id)appName;
- (id)complicationDescriptor;
- (id)displayName;
- (void)setAppName:(id)arg1;
- (void)setComplicationDescriptor:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSupportedClockKitFamilies:(id)arg1;
- (void)setWidgetDescriptor:(id)arg1;
- (id)supportedClockKitFamilies;
- (id)widgetDescriptor;

@end
