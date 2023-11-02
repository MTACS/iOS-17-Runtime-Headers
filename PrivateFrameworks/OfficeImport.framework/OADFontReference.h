
@interface OADFontReference : NSObject <NSCopying> {
    OADColor * mColor;
    int  mIndex;
}

- (void).cxx_destruct;
- (void)applyToParagraphProperties:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (int)index;
- (bool)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setIndex:(int)arg1;

@end
