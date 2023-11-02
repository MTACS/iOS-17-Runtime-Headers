
@interface UISheetPresentationControllerDetent : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    double  __constant;
    bool  __createdWithDeprecatedInitializer;
    id /* block */  __internalBlock;
    long long  __type;
    NSString * _identifier;
}

@property (nonatomic, readonly) double _constant;
@property (nonatomic, readonly) bool _createdWithDeprecatedInitializer;
@property (nonatomic, readonly) NSString *_identifier;
@property (nonatomic, readonly) id /* block */ _internalBlock;
@property (nonatomic, readonly) long long _type;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_detentWithContainerViewBlock:(id /* block */)arg1;
+ (id)_detentWithIdentifier:(id)arg1 constant:(double)arg2;
+ (id)_detentWithIdentifier:(id)arg1 containerViewBlock:(id /* block */)arg2;
+ (id)_detentWithIdentifier:(id)arg1 resolutionContextBlock:(id /* block */)arg2;
+ (id)_detentWithResolutionContextBlock:(id /* block */)arg1;
+ (id)customDetentWithIdentifier:(id)arg1 resolver:(id /* block */)arg2;
+ (id)largeDetent;
+ (id)mediumDetent;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_constant;
- (bool)_createdWithDeprecatedInitializer;
- (id)_identifier;
- (id /* block */)_internalBlock;
- (void)_setIdentifier:(id)arg1;
- (long long)_type;
- (double)_valueInResolutionContext:(id)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 internalBlock:(id /* block */)arg3 constant:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)resolvedValueInContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmojiPoster.framework/EmojiPoster

+ (id)emp_detentWithIdentifier:(id)arg1 resolutionContextBlock:(id /* block */)arg2;

@end
