
@interface WFStaccatoActionTemplateParameterValue : NSObject <NSSecureCoding> {
    NSString * _identifier;
    WFImage * _image;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    <WFPropertyListObject> * _serializedState;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) <WFPropertyListObject> *serializedState;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 image:(id)arg4 serializedState:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionTemplateParameterValue:(id)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)serializedState;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setSerializedState:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)initWithAction:(id)arg1 state:(id)arg2 parameter:(id)arg3;

@end
