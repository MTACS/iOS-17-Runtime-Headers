
@interface WBSPerSitePreferenceValueInformation : NSObject {
    NSDate * _creationDate;
    NSString * _domain;
    id  _value;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)creationDate;
- (id)domain;
- (id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3;
- (id)value;

@end
