
@interface OUKeyframeMetaExtend : OUKeyframeMeta {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*points[30]; 
    }  _samplePoints;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[30]; } samplePoints;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[30]; })samplePoints;
- (void)setSamplePoints:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[30]; })arg1;

@end
