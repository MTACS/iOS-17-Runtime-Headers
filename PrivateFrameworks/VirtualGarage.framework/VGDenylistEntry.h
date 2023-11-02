
@interface VGDenylistEntry : NSObject {
    NSArray * _firmwareIds;
    NSNumber * _modelId;
    NSArray * _models;
    NSArray * _years;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithModelId:(id)arg1 firmwareIds:(id)arg2 years:(id)arg3 models:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSupersetOfEntry:(id)arg1;

@end
