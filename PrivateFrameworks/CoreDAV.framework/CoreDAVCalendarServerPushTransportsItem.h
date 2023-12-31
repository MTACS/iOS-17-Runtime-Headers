
@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
    NSMutableSet * _transports;
}

@property (nonatomic, retain) NSMutableSet *transports;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addTransport:(id)arg1;
- (id)description;
- (id)init;
- (void)setTransports:(id)arg1;
- (id)transports;

@end
