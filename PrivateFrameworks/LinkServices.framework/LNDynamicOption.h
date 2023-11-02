
@interface LNDynamicOption : NSObject <NSCopying, NSSecureCoding, WFSerializableContent> {
    long long  _indentationLevel;
    LNValue * _value;
}

@property (nonatomic) bool containsSensitiveContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LNImage *image;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) LNStaticDeferredLocalizedString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly) LNValue *value;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (long long)indentationLevel;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 indentationLevel:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)value;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (bool)containsSensitiveContent;
- (void)setContainsSensitiveContent:(bool)arg1;
- (id)wfSerializedRepresentation;

@end
