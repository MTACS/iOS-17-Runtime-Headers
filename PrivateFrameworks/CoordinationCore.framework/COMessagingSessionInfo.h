
@interface COMessagingSessionInfo : NSObject {
    COClusterMember * _member;
    bool  _producedSession;
    NSString * _subTopic;
}

@property (nonatomic, readonly, copy) COClusterMember *member;
@property (nonatomic, readonly) bool producedSession;
@property (nonatomic, readonly, copy) NSString *subTopic;

- (void).cxx_destruct;
- (id)initWithSubTopic:(id)arg1 member:(id)arg2 produced:(bool)arg3;
- (id)member;
- (bool)producedSession;
- (id)subTopic;

@end
