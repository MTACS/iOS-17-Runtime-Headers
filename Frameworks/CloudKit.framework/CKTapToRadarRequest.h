
@interface CKTapToRadarRequest : NSObject {
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _radarDescription;
    NSString * _relatedRadar;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *relatedRadar;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)radarDescription;
- (id)relatedRadar;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRelatedRadar:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)uuid;

@end
