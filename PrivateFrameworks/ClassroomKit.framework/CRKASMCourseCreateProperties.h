
@interface CRKASMCourseCreateProperties : NSObject <NSCopying> {
    <CRKASMLocation> * _location;
    CRKASMCourseUpdateProperties * _updateProperties;
}

@property (nonatomic, retain) <CRKASMLocation> *location;
@property (nonatomic, copy) CRKASMCourseUpdateProperties *updateProperties;

- (void).cxx_destruct;
- (bool)areFulfilledByCourse:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setUpdateProperties:(id)arg1;
- (id)updateProperties;

@end
