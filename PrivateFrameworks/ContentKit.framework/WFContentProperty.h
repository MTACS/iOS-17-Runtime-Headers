
@interface WFContentProperty : NSObject <NSCopying> {
    NSArray * _allowedOperators;
    bool  _appendable;
    id /* block */  _block;
    bool  _canLowercaseName;
    bool  _caseInsensitive;
    unsigned long long  _comparableUnits;
    NSString * _displayName;
    bool  _filterable;
    bool  _gettable;
    bool  _irrational;
    NSString * _keyPath;
    NSString * _measurementUnitType;
    bool  _multipleValues;
    NSString * _name;
    NSString * _negativeName;
    NSArray * _possibleValues;
    id /* block */  _possibleValuesGetter;
    bool  _primary;
    Class  _propertyClass;
    bool  _removable;
    bool  _settable;
    id /* block */  _setterBlock;
    NSString * _singularItemName;
    bool  _sortable;
    unsigned long long  _tense;
    unsigned long long  _timeUnits;
    <WFPropertyListObject> * _userInfo;
}

@property (nonatomic, readonly, copy) NSArray *allowedOperators;
@property (nonatomic, readonly, copy) NSSet *allowedTransactionModes;
@property (getter=isAppendable, nonatomic, readonly) bool appendable;
@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) bool canLowercaseName;
@property (nonatomic, readonly) bool caseInsensitive;
@property (nonatomic, readonly) unsigned long long comparableUnits;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isFilterable, nonatomic, readonly) bool filterable;
@property (getter=isGettable, nonatomic, readonly) bool gettable;
@property (nonatomic, readonly) bool hasNegative;
@property (nonatomic, readonly) bool hasPossibleValues;
@property (getter=isIrrational, nonatomic, readonly) bool irrational;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (getter=isLabeledValue, nonatomic, readonly) bool labeledValue;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedNegativeName;
@property (nonatomic, readonly, copy) NSString *localizedSingularItemName;
@property (nonatomic, readonly) NSString *measurementUnitType;
@property (nonatomic, readonly) bool multipleValues;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *negativeName;
@property (nonatomic, readonly, copy) NSArray *possibleLabels;
@property (nonatomic, copy) NSArray *possibleValues;
@property (nonatomic, copy) id /* block */ possibleValuesGetter;
@property (getter=isPrimary, nonatomic, readonly) bool primary;
@property (nonatomic, readonly) Class propertyClass;
@property (getter=isRemovable, nonatomic, readonly) bool removable;
@property (getter=isSettable, nonatomic, readonly) bool settable;
@property (nonatomic, readonly, copy) id /* block */ setterBlock;
@property (nonatomic, readonly, copy) NSString *singularItemName;
@property (getter=isSortable, nonatomic, readonly) bool sortable;
@property (nonatomic, readonly) unsigned long long tense;
@property (nonatomic, readonly) unsigned long long timeUnits;
@property (nonatomic, readonly, copy) <WFPropertyListObject> *userInfo;
@property (nonatomic, readonly) Class valueItemClass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)possibleLabelsForClass:(Class)arg1 localized:(bool)arg2;

- (void).cxx_destruct;
- (id)allowedOperators;
- (id)allowedTransactionModes;
- (id /* block */)block;
- (bool)canLowercaseName;
- (bool)caseInsensitive;
- (unsigned long long)comparableUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (unsigned long long)equivalentHash;
- (void)getPossibleValues:(id /* block */)arg1;
- (void)getValueForObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getValuesForObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasNegative;
- (bool)hasPossibleValues;
- (id)initWithKeyPath:(id)arg1 block:(id /* block */)arg2 setterBlock:(id /* block */)arg3 name:(id)arg4 propertyClass:(Class)arg5 multipleValues:(bool)arg6 filterable:(bool)arg7 sortable:(bool)arg8 gettable:(bool)arg9 settable:(bool)arg10 appendable:(bool)arg11 removable:(bool)arg12 primary:(bool)arg13 allowedOperators:(id)arg14 userInfo:(id)arg15 possibleValues:(id)arg16 possibleValuesGetter:(id /* block */)arg17 caseInsensitive:(bool)arg18 negativeName:(id)arg19 singularItemName:(id)arg20 irrational:(bool)arg21 tense:(unsigned long long)arg22 timeUnits:(unsigned long long)arg23 comparableUnits:(unsigned long long)arg24 measurementUnitType:(id)arg25 displayName:(id)arg26 canLowercaseName:(bool)arg27;
- (bool)isAppendable;
- (bool)isEquivalentToProperty:(id)arg1;
- (bool)isFilterable;
- (bool)isGettable;
- (bool)isIrrational;
- (bool)isLabeledValue;
- (bool)isPrimary;
- (bool)isRemovable;
- (bool)isSettable;
- (bool)isSortable;
- (id)keyPath;
- (id)localizedName;
- (id)localizedNegativeName;
- (id)localizedSingularItemName;
- (id)measurementUnitType;
- (bool)multipleValues;
- (id)name;
- (id)negativeName;
- (id)possibleLabels;
- (id)possibleValues;
- (id /* block */)possibleValuesGetter;
- (id)preferredTransactionModeWithCurrentMode:(id)arg1;
- (Class)propertyClass;
- (void)setPossibleValues:(id)arg1;
- (void)setPossibleValuesGetter:(id /* block */)arg1;
- (id /* block */)setterBlock;
- (id)singularItemName;
- (unsigned long long)tense;
- (unsigned long long)timeUnits;
- (void)updateWithValue:(id)arg1 withTransaction:(id)arg2 completion:(id /* block */)arg3;
- (id)userInfo;
- (Class)valueItemClass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)parameterDefinition;

@end
