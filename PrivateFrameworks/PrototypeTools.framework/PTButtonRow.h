
@interface PTButtonRow : PTSRow {
    NSString * _outletKeyPath;
}

@property (nonatomic, copy) NSString *outletKeyPath;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)restoreDefaultSettingsButton;
+ (id)rowWithTitle:(id)arg1 action:(id)arg2;
+ (id)rowWithTitle:(id)arg1 outletKeyPath:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outletKeyPath;
- (id)outletKeyPath:(id)arg1;
- (void)setOutletKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
