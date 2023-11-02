
@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionButtonPresentationProperties * _button;
    LPCaptionPresentationProperties * _leading;
    LPCaptionPresentationProperties * _trailing;
}

@property (nonatomic, retain) LPCaptionButtonPresentationProperties *button;
@property (nonatomic, readonly) bool hasAnyContent;
@property (nonatomic, readonly, retain) LPCaptionPresentationProperties *leading;
@property (nonatomic, readonly, retain) LPCaptionPresentationProperties *trailing;

- (void).cxx_destruct;
- (void)applyToAllCaptions:(id /* block */)arg1;
- (id)button;
- (bool)hasAnyContent;
- (id)init;
- (id)leading;
- (id)left;
- (id)right;
- (void)setButton:(id)arg1;
- (id)trailing;

@end
