
@interface MRSendCommandHandlerDialogAction : NSObject <NSCopying> {
    MRSendCommandHandlerEvent * _event;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) MRSendCommandHandlerEvent *event;
@property (nonatomic, readonly, copy) _MRSendCommandResultHandlerDialogActionProtobuf *protobuf;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)event;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;
- (id)protobuf;
- (id)title;
- (long long)type;

@end
