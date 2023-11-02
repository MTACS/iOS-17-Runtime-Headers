
@interface CSInstantAnswer : NSObject <NSCopying> {
    NSMutableArray * _actions;
    CSDonatedEvent * _event;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, retain) CSDonatedEvent *event;

+ (id)dataFromInstantAnswers:(id)arg1;
+ (id)instantAnswersFromData:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)event;
- (id)initWithAttributes:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setEvent:(id)arg1;

@end
