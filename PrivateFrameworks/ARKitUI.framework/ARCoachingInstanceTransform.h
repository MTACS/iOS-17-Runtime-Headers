
@interface ARCoachingInstanceTransform : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _baseTransform;
    void _localScale;
    void _localTranslation;
    void _recordedScale;
    void _recordedTranslation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic) void localScale;
@property (nonatomic) void localTranslation;
@property (nonatomic) void recordedScale;
@property (nonatomic) void recordedTranslation;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

- (void)doTransform;
- (id)init:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)localScale;
- (void)localTranslation;
- (void)recordedScale;
- (void)recordedTranslation;
- (void)setLocalScale;
- (void)setLocalTranslation;
- (void)setRecordedScale;
- (void)setRecordedTranslation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
