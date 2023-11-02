
@interface WFTTSPause : NSObject <WFTTSStringAnnotation, WFTTSStringComponent> {
    NSNumber * _seconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *seconds;
@property (readonly) Class superclass;

+ (id)parseAnnotationString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSeconds:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)seconds;

@end
