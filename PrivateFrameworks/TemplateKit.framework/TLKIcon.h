
@interface TLKIcon : TLKFormattedTextItem {
    TLKImage * _image;
}

@property (nonatomic, retain) TLKImage *image;

- (void).cxx_destruct;
- (unsigned long long)_itemType;
- (id)image;
- (void)setImage:(id)arg1;

@end
