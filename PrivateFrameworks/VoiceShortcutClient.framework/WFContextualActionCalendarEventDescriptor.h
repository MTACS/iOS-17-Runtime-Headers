
@interface WFContextualActionCalendarEventDescriptor : NSObject <NSSecureCoding> {
    NSString * _eventIdentifier;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 title:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end
