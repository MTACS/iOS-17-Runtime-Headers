
@interface GDPersonTaggingOptions : NSObject {
    NSDictionary * _tagThresholds;
    GDPersonEntityTaggingOptionsInner * inner;
}

@property (nonatomic, retain) NSDictionary *tagThresholds;

- (void).cxx_destruct;
- (id)initWithTagThresholds:(id)arg1;
- (void)setTagThresholds:(id)arg1;
- (id)tagThresholds;

@end
