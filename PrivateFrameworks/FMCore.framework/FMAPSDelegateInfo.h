
@interface FMAPSDelegateInfo : NSObject {
    <FMAPSDelegate> * _delegate;
    NSString * _topic;
}

@property (nonatomic) <FMAPSDelegate> *delegate;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end
