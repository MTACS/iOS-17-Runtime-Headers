
@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices

+ (id)environmentWithIdentifier:(id)arg1;
+ (id)keyboardFocusEnvironment;
+ (id)protobufSchema;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)systemEnvironment;

- (void).cxx_destruct;
- (bool)_isKeyboardFocusEnvironment;
- (bool)_isSystemEnvironment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)ui_systemKeyCommandOverlayEnvironment;

@end
