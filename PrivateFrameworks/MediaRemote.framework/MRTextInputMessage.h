
@interface MRTextInputMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) NSString *text;

- (unsigned long long)actionType;
- (id)initWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (id)text;
- (unsigned long long)type;

@end
