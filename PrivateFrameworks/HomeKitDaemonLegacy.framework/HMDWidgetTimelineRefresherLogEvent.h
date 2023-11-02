
@interface HMDWidgetTimelineRefresherLogEvent : HMMLogEvent {
    NSString * _kind;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)initWithKind:(id)arg1 reason:(id)arg2;
- (id)kind;
- (id)reason;

@end
