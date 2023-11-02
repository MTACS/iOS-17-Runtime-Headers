
@interface HDSPEventRecordMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage> {
    NSDate * _date;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *dateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
