
@interface GCDevicePhysicalInputSourceDescription : NSObject <GCPhysicalInputSource, NSCopying, NSSecureCoding> {
    unsigned long long  _direction;
    NSSet * _elementAliases;
    NSString * _elementLocalizedName;
    GCDevicePhysicalInputSymbolDescription * _symbol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long direction;
@property (readonly, copy) NSSet *elementAliases;
@property (readonly) NSSet *elementAliases;
@property (readonly, copy) NSString *elementLocalizedName;
@property (readonly) NSString *elementLocalizedName;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) GCDevicePhysicalInputSymbolDescription *symbol;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 sfSymbolsName:(id)arg3;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 sfSymbolsName:(id)arg3 direction:(unsigned long long)arg4;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3 direction:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)direction;
- (id)elementAliases;
- (id)elementLocalizedName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)symbol;

// Image: /System/Library/Frameworks/GameController.framework/GameController

- (id)sfSymbolsName;

@end
