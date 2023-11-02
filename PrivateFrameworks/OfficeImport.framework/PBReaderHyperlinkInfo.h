
@interface PBReaderHyperlinkInfo : NSObject {
    NSString * mHyperlink1;
    NSString * mHyperlink2;
    NSString * mScreenTip;
}

@property (nonatomic, retain) NSString *hyperlink1;
@property (nonatomic, retain) NSString *hyperlink2;
@property (nonatomic, retain) NSString *screenTip;

- (void).cxx_destruct;
- (id)hyperlink1;
- (id)hyperlink2;
- (id)screenTip;
- (void)setHyperlink1:(id)arg1;
- (void)setHyperlink2:(id)arg1;
- (void)setScreenTip:(id)arg1;

@end
