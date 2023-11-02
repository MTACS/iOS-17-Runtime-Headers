
@interface SWHighlightMembershipEvent : NSObject <SWHighlightEvent> {
    NSURL * _highlightURL;
    long long  _membershipEventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *highlightURL;
@property (nonatomic, readonly) long long membershipEventTrigger;
@property (nonatomic, readonly) long long membershipEventType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1 trigger:(long long)arg2;
- (id)initWithHighlightURL:(id)arg1 type:(long long)arg2;
- (long long)membershipEventTrigger;
- (long long)membershipEventType;

@end
