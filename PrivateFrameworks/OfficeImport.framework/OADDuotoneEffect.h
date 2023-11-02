
@interface OADDuotoneEffect : OADBlipEffect {
    OADColor * mColor1;
    OADColor * mColor2;
    int  mTransferMode1;
    int  mTransferMode2;
}

- (void).cxx_destruct;
- (id)color1;
- (id)color2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setColor1:(id)arg1;
- (void)setColor2:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTransferMode1:(int)arg1;
- (void)setTransferMode2:(int)arg1;
- (int)transferMode1;
- (int)transferMode2;

@end
