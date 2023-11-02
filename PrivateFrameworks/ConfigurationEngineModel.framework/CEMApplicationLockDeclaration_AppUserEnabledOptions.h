
@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase {
    NSNumber * _payloadAssistiveTouch;
    NSNumber * _payloadInvertColors;
    NSNumber * _payloadVoiceOver;
    NSNumber * _payloadZoom;
}

@property (nonatomic, copy) NSNumber *payloadAssistiveTouch;
@property (nonatomic, copy) NSNumber *payloadInvertColors;
@property (nonatomic, copy) NSNumber *payloadVoiceOver;
@property (nonatomic, copy) NSNumber *payloadZoom;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithVoiceOver:(id)arg1 withZoom:(id)arg2 withInvertColors:(id)arg3 withAssistiveTouch:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAssistiveTouch;
- (id)payloadInvertColors;
- (id)payloadVoiceOver;
- (id)payloadZoom;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAssistiveTouch:(id)arg1;
- (void)setPayloadInvertColors:(id)arg1;
- (void)setPayloadVoiceOver:(id)arg1;
- (void)setPayloadZoom:(id)arg1;

@end
