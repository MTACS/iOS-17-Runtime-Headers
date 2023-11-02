
@interface SFImage : NSObject <NSCopying, NSSecureCoding, SFImage> {
    NSString * _accessibilityLabel;
    SFImage * _badgingImage;
    NSString * _contentType;
    double  _cornerRadius;
    int  _cornerRoundingStyle;
    struct { 
        unsigned int isTemplate : 1; 
        unsigned int shouldCropToCircle : 1; 
        unsigned int cornerRadius : 1; 
        unsigned int scale : 1; 
        unsigned int size : 1; 
        unsigned int source : 1; 
        unsigned int cornerRoundingStyle : 1; 
    }  _has;
    NSString * _identifier;
    NSData * _imageData;
    bool  _isTemplate;
    NSString * _keyColor;
    double  _scale;
    bool  _shouldCropToCircle;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    int  _source;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) SFImage *badgingImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (id)imageWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)badgingImage;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (int)cornerRoundingStyle;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCornerRadius;
- (bool)hasCornerRoundingStyle;
- (bool)hasIsTemplate;
- (bool)hasScale;
- (bool)hasShouldCropToCircle;
- (bool)hasSize;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;
- (id)jsonData;
- (id)keyColor;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadImageDataWithCompletionHandler:(id /* block */)arg1;
- (void)loadImageDataWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)scale;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBadgingImage:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRoundingStyle:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSource:(int)arg1;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;
- (int)source;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)downcastToIntentsUIVariantIfApplicable;

@end
