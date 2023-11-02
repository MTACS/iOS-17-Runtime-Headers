
@interface GCDevicePhysicalInputElementDescription : GCDevicePhysicalInputViewDescription <NSCopying, NSSecureCoding> {
    NSSet * _aliases;
    NSString * _identifier;
    NSString * _localizedName;
    GCDevicePhysicalInputSymbolDescription * _symbol;
}

@property (nonatomic, copy) NSSet *aliases;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) GCDevicePhysicalInputSymbolDescription *symbol;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)descriptionWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aliases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)redactedDescription;
- (void)setAliases:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;
- (bool)validate:(out id*)arg1;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
