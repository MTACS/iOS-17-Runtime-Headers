
@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {
    LSExtensionPointRecord * _record;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSDictionary *sdkEntry;
@property (nonatomic, readonly) NSString *version;

+ (id)_synthesizedExtensionPointWithIdentifier:(id)arg1;
+ (id)extensionPointForIdentifier:(id)arg1;
+ (id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2;
+ (id)identifierForCurrentProcess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1 resolveAndDetach:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)platform;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sdkEntry;

@end
