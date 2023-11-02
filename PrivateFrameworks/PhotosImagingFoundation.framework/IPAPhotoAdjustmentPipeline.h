
@interface IPAPhotoAdjustmentPipeline : NSObject {
    NSString * _platform;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) unsigned long long version;

+ (id)current;
+ (void)initialize;
+ (id)pipelineForPlatform:(id)arg1 version:(unsigned long long)arg2;
+ (id)pipelineForVersion:(unsigned long long)arg1;
+ (id)pipelineFromString:(id)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentPipeline:(id)arg1;
- (id)platform;
- (id)string;
- (unsigned long long)version;

@end
