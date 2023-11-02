
@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation> {
    bool  _clearedPreviousAnnotations;
    NSMapTable * _seriesToAnnotations;
}

@property (nonatomic) bool clearedPreviousAnnotations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *seriesToAnnotations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forceClearAxisAnnotations;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 modelCoordinate:(id)arg3;
- (long long)applyAnnotationForSeries:(id)arg1;
- (void)clearAxisAnnotations;
- (bool)clearedPreviousAnnotations;
- (id)init;
- (id)seriesToAnnotations;
- (void)setClearedPreviousAnnotations:(bool)arg1;
- (void)setSeriesToAnnotations:(id)arg1;
- (void)startAnnotationSequence;

@end
