
@interface ATXShortcutsAction : NSObject <ATXSuggestionExecutableProtocol, NSSecureCoding> {
    WFContextualAction * _contextualAction;
    ATXActionCriteria * _criteria;
}

@property (nonatomic, readonly) WFContextualAction *contextualAction;
@property (nonatomic, readonly) ATXActionCriteria *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)contextualAction;
- (id)contextualActionGetDirections;
- (id)criteria;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextualAction:(id)arg1 criteria:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (id)searchableItem;

@end
