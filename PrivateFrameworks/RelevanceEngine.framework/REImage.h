
@interface REImage : NSObject <NSCoding, NSCopying>

@property (nonatomic, readonly) UIImage *image;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
+ (id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

+ (id)imageWithImage:(id)arg1;

- (id)image;

@end
