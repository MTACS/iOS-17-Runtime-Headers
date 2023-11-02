
@interface PTDrillDownRow : PTSRow {
    NSString * _childKeyPath;
    PTSettings * _childSettings;
}

@property (nonatomic, readonly) NSString *childKeyPath;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childKeyPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChildKeyPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)value;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (id)defaultUIAction;
- (Class)tableViewCellClass;

@end
