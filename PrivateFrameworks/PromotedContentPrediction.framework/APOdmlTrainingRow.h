
@interface APOdmlTrainingRow : NSObject {
    NSDictionary * _features;
    NSString * _rowID;
}

@property (nonatomic, readonly) NSDictionary *features;
@property (nonatomic, retain) NSString *rowID;

- (void).cxx_destruct;
- (id)features;
- (id)initWithFeatures:(id)arg1;
- (bool)isValidFeature:(id)arg1 featureName:(id)arg2 min:(id)arg3 max:(id)arg4 sentinelValues:(id)arg5;
- (bool)isValidRow:(id)arg1;
- (void)reportError:(long long)arg1 name:(id)arg2 value:(id)arg3;
- (id)rowID;
- (void)setRowID:(id)arg1;

@end
