
@interface MRSendCommandHandlerDialog : NSObject <NSCopying> {
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSMutableArray * _mutableActions;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, copy) NSString *localizedMessage;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) _MRSendCommandResultHandlerDialogProtobuf *protobuf;

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)protobuf;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
