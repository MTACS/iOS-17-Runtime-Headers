
@interface SXVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding, SXVisiblePercentageReporting> {
    double  _visiblePercentage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double visiblePercentage;

- (id)initWithVisiblePercentage:(double)arg1;
- (void)setVisiblePercentage:(double)arg1;
- (double)visiblePercentage;
- (double)visiblePercentageOfObject:(id)arg1;

@end
