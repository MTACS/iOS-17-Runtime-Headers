
@interface MFPRedEyeCorrectionEffect : MFPEffect {
    void * mAreas;
}

+ (id)GUID;

- (void)dealloc;
- (id)initWithAreas:(const void*)arg1;

@end
