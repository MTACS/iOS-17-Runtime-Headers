
@interface _MFPartiallyDownloadedBannerView : MFHasMoreContentBannerView {
    unsigned long long  _remainingBytes;
}

@property unsigned long long remainingBytes;

- (id)actionStringIsDownloading:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainingBytes:(unsigned long long)arg2;
- (unsigned long long)remainingBytes;
- (void)setRemainingBytes:(unsigned long long)arg1;

@end
