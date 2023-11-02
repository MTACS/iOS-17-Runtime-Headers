
@interface PXStoryPrecomposedTimelineProducer : NSObject <PXStoryTimelineProducer> {
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } viewportSize; 
        double dividerWidth; 
        double singleAssetAspectRatio; 
    }  _clipCompositionContext;
    struct { 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } s; 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } t; 
    }  _noKenBurnsEffectParameters;
    unsigned long long  _timelineKind;
}

@property (nonatomic) unsigned long long timelineKind;

- (id)_segmentsForTimelineKind:(unsigned long long)arg1 spec:(id)arg2;
- (id)createTimelineWithConfiguration:(id)arg1;
- (id)initWithTimelineKind:(unsigned long long)arg1;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)setTimelineKind:(unsigned long long)arg1;
- (unsigned long long)timelineKind;

@end
