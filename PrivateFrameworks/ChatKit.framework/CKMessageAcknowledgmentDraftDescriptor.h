
@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment> {
    long long  _messageAcknowledgmentType;
    NSString * _serviceName;
}

@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)acknowledgmentBarColor;
+ (id)allMessageAcknowledgmentDescriptorsWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)initWithMessageAcknowledgmentType:(long long)arg1 serviceName:(id)arg2;
- (long long)messageAcknowledgmentType;
- (id)selectedAcknowledgmentImageColor;
- (id)selectedBalloonColor;
- (id)serviceName;
- (id)symbolName;
- (long long)themeColor;

@end
