
@interface PPSuggestedEvent : PPScoredEvent {
    unsigned char  _category;
    NSString * _eventIdentifier;
}

@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) NSString *eventIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPPEvent:(id)arg1;
- (id)initWithPPEvent:(id)arg1 score:(double)arg2;

@end
