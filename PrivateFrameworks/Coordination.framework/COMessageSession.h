
@interface COMessageSession : NSObject {
    bool  _didUseNotice;
    bool  _didUseRequest;
    bool  _didUseResponse;
    COClusterMember * _member;
    unsigned long long  _startTime;
}

@property (nonatomic) bool didUseNotice;
@property (nonatomic) bool didUseRequest;
@property (nonatomic) bool didUseResponse;
@property (nonatomic, readonly, retain) COClusterMember *member;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic, readonly, copy) NSString *subTopic;

- (void).cxx_destruct;
- (bool)didUseNotice;
- (bool)didUseRequest;
- (bool)didUseResponse;
- (unsigned long long)hash;
- (id)initWithMember:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)member;
- (id)messageChannel;
- (void)setDidUseNotice:(bool)arg1;
- (void)setDidUseRequest:(bool)arg1;
- (void)setDidUseResponse:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)stopWithNotice:(id)arg1;
- (id)subTopic;

@end
