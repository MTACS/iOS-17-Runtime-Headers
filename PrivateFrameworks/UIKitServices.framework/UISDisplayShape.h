
@interface UISDisplayShape : NSObject <BSXPCCoding, NSCopying, _UIDisplayInfoShape>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayShapeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)displayShapeName;

@end
