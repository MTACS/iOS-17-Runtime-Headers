
@interface PatternVisualInfo : NSObject {
    NSArray * _sectionIds;
    unsigned long long  _visualLocation;
}

@property (nonatomic, retain) NSArray *sectionIds;
@property (nonatomic) unsigned long long visualLocation;

- (void).cxx_destruct;
- (id)sectionIds;
- (void)setSectionIds:(id)arg1;
- (void)setVisualLocation:(unsigned long long)arg1;
- (unsigned long long)visualLocation;

@end
