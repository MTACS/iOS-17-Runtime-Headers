
@interface VIVisualUnderstanding : NSObject <NSCopying> {
    VIAnnotation * _annotation;
    NSArray * _imageRegions;
    NSData * _payload;
}

@property (nonatomic, readonly) VIAnnotation *annotation;
@property (nonatomic, readonly) NSArray *imageRegions;
@property (nonatomic, readonly) NSData *payload;

- (void).cxx_destruct;
- (id)annotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageRegions;
- (id)initWithImageRegions:(id)arg1 annotation:(id)arg2 payload:(id)arg3;
- (id)initWithImageRegions:(id)arg1 payload:(id)arg2;
- (id)initWithImageRegions:(id)arg1 textBlockAnnotation:(id)arg2 payload:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)payload;

@end
