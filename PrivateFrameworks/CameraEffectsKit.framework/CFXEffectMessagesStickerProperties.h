
@interface CFXEffectMessagesStickerProperties : NSObject {
    NSString * _effectID;
    NSString * _localizedDescription;
    NSURL * _previewUrl;
}

@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSURL *previewUrl;

- (void).cxx_destruct;
- (id)effectID;
- (id)initWithEffectID:(id)arg1 previewUrl:(id)arg2 localizedDescription:(id)arg3;
- (id)localizedDescription;
- (id)previewUrl;

@end
