
@interface _WKTextManipulationConfiguration : NSObject {
    NSArray * _exclusionRules;
    bool  _includeSubframes;
}

@property (nonatomic, copy) NSArray *exclusionRules;
@property (nonatomic) bool includeSubframes;

- (void)dealloc;
- (id)exclusionRules;
- (bool)includeSubframes;
- (void)setExclusionRules:(id)arg1;
- (void)setIncludeSubframes:(bool)arg1;

@end
