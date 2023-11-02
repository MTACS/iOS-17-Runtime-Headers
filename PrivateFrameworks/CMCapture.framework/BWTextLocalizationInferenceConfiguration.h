
@interface BWTextLocalizationInferenceConfiguration : BWBoundingBoxInferenceConfiguration {
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _version;
}

@property (nonatomic) struct { unsigned short x1; unsigned short x2; unsigned short x3; } version;

+ (id)configuration;

- (id)initWithInferenceType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2;
- (void)setVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })version;

@end
