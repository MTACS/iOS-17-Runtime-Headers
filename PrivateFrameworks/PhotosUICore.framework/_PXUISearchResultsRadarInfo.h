
@interface _PXUISearchResultsRadarInfo : NSObject {
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _radarClassification;
    NSString * _radarDescription;
    NSString * _radarKeyword;
    NSString * _radarTitle;
}

@property (nonatomic, retain) NSString *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *radarClassification;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *radarKeyword;
@property (nonatomic, retain) NSString *radarTitle;

- (void).cxx_destruct;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)radarClassification;
- (id)radarDescription;
- (id)radarKeyword;
- (id)radarTitle;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setRadarClassification:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarKeyword:(id)arg1;
- (void)setRadarTitle:(id)arg1;

@end
