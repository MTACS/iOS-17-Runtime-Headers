
@interface TLKInlineImage : TLKFormattedTextItem {
    TLKImage * _tlkImage;
}

@property (nonatomic, retain) TLKImage *tlkImage;

- (void).cxx_destruct;
- (void)setTlkImage:(id)arg1;
- (id)tlkImage;

@end
