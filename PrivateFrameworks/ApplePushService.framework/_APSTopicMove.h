
@interface _APSTopicMove : NSObject {
    unsigned long long  _fromListID;
    unsigned long long  _toListID;
    NSString * _topic;
}

@property (nonatomic) unsigned long long fromListID;
@property (nonatomic) unsigned long long toListID;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (unsigned long long)fromListID;
- (void)setFromListID:(unsigned long long)arg1;
- (void)setToListID:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)toListID;
- (id)topic;

@end
