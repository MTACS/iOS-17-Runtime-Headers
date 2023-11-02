
@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {
    ATXHeuristicObjectHandle * _event;
    NSString * _suggestionsInfoUniqueKey;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_makeAction;
- (id)actionTypeName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4;

@end
