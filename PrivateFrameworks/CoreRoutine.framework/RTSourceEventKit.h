
@interface RTSourceEventKit : RTSource {
    bool  _allDay;
    NSDate * _endDate;
    NSString * _eventIdentifier;
    NSString * _location;
    unsigned long long  _sharingStatus;
    NSDate * _startDate;
    NSString * _suggestionInfo_opaqueKey;
    NSDictionary * _suggestionsSchemaOrg;
    NSString * _title;
}

@property (getter=isAllDay, nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) unsigned long long sharingStatus;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *suggestionInfo_opaqueKey;
@property (nonatomic, readonly) NSDictionary *suggestionsSchemaOrg;
@property (nonatomic, readonly) NSString *title;

+ (id)sharingStatusToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(bool)arg6 sharingStatus:(unsigned long long)arg7;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8 suggestionsSchemaOrg:(id)arg9;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)location;
- (unsigned long long)sharingStatus;
- (id)startDate;
- (id)suggestionInfo_opaqueKey;
- (id)suggestionsSchemaOrg;
- (id)title;

@end