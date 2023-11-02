
@interface BMDSLSubscriber : BMDSLBaseCodable <BMDSLSubscriber> {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)bpsSubscriber;
- (id)identifier;

@end
