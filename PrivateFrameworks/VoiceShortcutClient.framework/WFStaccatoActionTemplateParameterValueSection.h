
@interface WFStaccatoActionTemplateParameterValueSection : NSObject <NSSecureCoding> {
    WFImage * _image;
    NSString * _subtitle;
    NSString * _title;
    NSArray * _values;
}

@property (nonatomic, retain) WFImage *image;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *values;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 values:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionTemplateParameterValueSection:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValues:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)values;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)initWithSection:(id)arg1 action:(id)arg2 parameter:(id)arg3;

@end
