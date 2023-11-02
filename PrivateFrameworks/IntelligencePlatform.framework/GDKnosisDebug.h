
@interface GDKnosisDebug : NSObject <NSSecureCoding> {
    NSArray * _execSteps;
    int  _indexCallCount;
    NSArray * _messages;
}

@property (nonatomic, readonly, copy) NSArray *execSteps;
@property (nonatomic, readonly) int indexCallCount;
@property (nonatomic, readonly, copy) NSArray *messages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)execSteps;
- (int)indexCallCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndexCallCount:(int)arg1 execSteps:(id)arg2 messages:(id)arg3;
- (id)messages;

@end
