
@interface ATQuestionTopic : NSObject {
    void rawValue;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *rawValue;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (id)initWithRawValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rawValue;

@end
