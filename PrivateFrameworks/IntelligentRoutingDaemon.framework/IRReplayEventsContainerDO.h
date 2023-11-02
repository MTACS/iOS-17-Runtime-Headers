
@interface IRReplayEventsContainerDO : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _replayEvents;
}

@property (nonatomic, readonly) NSSet *replayEvents;

+ (id)replayEventsContainerDOWithReplayEvents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementReplayEvents:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReplayEvents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReplayEventsContainerDO:(id)arg1;
- (id)replayEvents;

@end
