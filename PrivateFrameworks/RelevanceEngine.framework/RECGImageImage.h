
@interface RECGImageImage : REImage {
    struct CGImage { } * _CGImage;
    double  _scale;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) double scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (struct CGImage { }*)CGImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)scale;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)image;

@end
