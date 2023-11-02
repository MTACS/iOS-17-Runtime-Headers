
@interface UIContentUnavailableConfigurationState : NSObject <UIConfigurationState, _UIContentUnavailableConfigurationStateReadonly> {
    NSMutableDictionary * _customStates;
    unsigned long long  _mutations;
    NSString * _searchText;
    struct { }  _stateFlags;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) unsigned long long _mutations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *searchControllerText;
@property (nonatomic, retain) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_customStatesForSwiftBridging;
- (unsigned long long)_mutations;
- (void)_setSwiftBridgingCustomState:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customStateForKey:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)searchControllerText;
- (id)searchText;
- (void)setCustomState:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSearchControllerText:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)asTTRI;

@end
