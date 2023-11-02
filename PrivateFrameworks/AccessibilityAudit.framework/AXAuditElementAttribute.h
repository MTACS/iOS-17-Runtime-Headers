
@interface AXAuditElementAttribute : NSObject {
    NSString * _attributeName;
    NSString * _developerAPISelector;
    bool  _displayAsTree;
    bool  _displayInline;
    NSString * _humanReadableName;
    bool  _isInternal;
    bool  _isSupported;
    bool  _performsAction;
    bool  _settable;
    long long  _valueType;
}

@property (nonatomic, copy) NSString *attributeName;
@property (nonatomic, copy) NSString *developerAPISelector;
@property (nonatomic) bool displayAsTree;
@property (nonatomic) bool displayInline;
@property (nonatomic, copy) NSString *humanReadableName;
@property (nonatomic) bool isInternal;
@property (nonatomic) bool isSupported;
@property (nonatomic) bool performsAction;
@property (getter=isSettable, nonatomic) bool settable;
@property (nonatomic) long long valueType;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)attributeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)developerAPISelector;
- (bool)displayAsTree;
- (bool)displayInline;
- (unsigned long long)hash;
- (id)humanReadableName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (bool)isSettable;
- (bool)isSupported;
- (bool)performsAction;
- (void)setAttributeName:(id)arg1;
- (void)setDeveloperAPISelector:(id)arg1;
- (void)setDisplayAsTree:(bool)arg1;
- (void)setDisplayInline:(bool)arg1;
- (void)setHumanReadableName:(id)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setIsSupported:(bool)arg1;
- (void)setPerformsAction:(bool)arg1;
- (void)setSettable:(bool)arg1;
- (void)setValueType:(long long)arg1;
- (long long)valueType;

@end
