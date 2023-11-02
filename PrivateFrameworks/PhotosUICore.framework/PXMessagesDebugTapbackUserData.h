
@interface PXMessagesDebugTapbackUserData : NSObject <PXTapbackUserData> {
    <PXDisplayAsset> * _asset;
    bool  _shouldAnimate;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAnimate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAsset:(id)arg1;
- (void)setShouldAnimate:(bool)arg1;
- (bool)shouldAnimate;

@end
