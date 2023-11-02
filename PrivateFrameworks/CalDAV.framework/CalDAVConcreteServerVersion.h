
@interface CalDAVConcreteServerVersion : CalDAVServerVersion {
    NSRegularExpression * _regularExpression;
}

@property (nonatomic, retain) NSRegularExpression *regularExpression;

+ (id)prototypes;

- (void).cxx_destruct;
- (id)regularExpression;
- (void)setRegularExpression:(id)arg1;

@end
