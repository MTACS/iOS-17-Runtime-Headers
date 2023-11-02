
@interface AskToCore.ATResponse : NSObject <NSCopying, NSSecureCoding> {
    void chosenAnswer;
    void originalQuestion;
    void responderHandle;
}

@property (nonatomic, readonly) _TtC5AskTo14ATAnswerChoice *chosenAnswer;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC5AskTo10ATQuestion *originalQuestion;
@property (nonatomic, copy) NSString *responderHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chosenAnswer;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)originalQuestion;
- (id)responderHandle;
- (void)setOriginalQuestion:(id)arg1;
- (void)setResponderHandle:(id)arg1;

@end
