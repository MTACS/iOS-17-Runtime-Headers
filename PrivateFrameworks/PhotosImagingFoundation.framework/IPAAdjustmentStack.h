
@interface IPAAdjustmentStack : NSObject <NSCopying> {
    NSArray * _adjustments;
    IPAAdjustmentVersionInfo * _versionInfo;
}

@property (nonatomic, copy) NSArray *adjustments;
@property (nonatomic, copy) IPAAdjustmentVersionInfo *versionInfo;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)adjustments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentStack:(id)arg1;
- (id)minimumVersionForFormat:(id)arg1;
- (void)setAdjustments:(id)arg1;
- (void)setVersionInfo:(id)arg1;
- (id)versionInfo;

@end
