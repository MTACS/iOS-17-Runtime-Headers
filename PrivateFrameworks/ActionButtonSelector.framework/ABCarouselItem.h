
@interface ABCarouselItem : NSObject <NSCopying> {
    bool  _canBeHighlighted;
    NSString * _identifier;
    UIImage * _image;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;

@end
