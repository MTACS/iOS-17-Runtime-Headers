
@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode {
    NSArray * _iconClassLabels;
    NSString * _loggingName;
    bool  _writeDebugImage;
}

@property (nonatomic, readonly) NSArray *iconClassLabels;
@property (nonatomic, retain) NSString *loggingName;
@property (nonatomic, readonly) iconclassification *mlModel;
@property (nonatomic) bool writeDebugImage;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_initializeClassLabels;
- (id)_localizedClassForClass:(id)arg1;
- (id)classLabelForIdx:(unsigned long long)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)iconClassLabels;
- (id)loggingName;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (id)mlModelClasses;
- (id)mobileAssetType;
- (id)modelResourceNames;
- (void)setLoggingName:(id)arg1;
- (void)setWriteDebugImage:(bool)arg1;
- (bool)writeDebugImage;

@end
