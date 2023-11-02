
@interface BPSTTRMetadata : NSObject {
    long long  _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _radarDescription;
    NSString * _title;
}

@property (nonatomic) long long componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_parameters;
- (void)_setComponentValuesFromComponent:(unsigned long long)arg1;
- (long long)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)init;
- (id)initWithComponent:(unsigned long long)arg1;
- (id)initWithComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(long long)arg3;
- (id)queryItems;
- (id)radarDescription;
- (void)setComponentID:(long long)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
