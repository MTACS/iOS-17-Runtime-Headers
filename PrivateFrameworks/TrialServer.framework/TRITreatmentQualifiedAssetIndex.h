
@interface TRITreatmentQualifiedAssetIndex : NSObject <NSCopying> {
    unsigned int  _index;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) NSString *treatmentId;

+ (id)indexWithTreatmentId:(id)arg1 index:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementIndex:(unsigned int)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)init;
- (id)initWithTreatmentId:(id)arg1 index:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIndex:(id)arg1;
- (id)treatmentId;

@end
