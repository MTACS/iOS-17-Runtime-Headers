
@interface CRHandleIntentCommand : CRBasicPayloadCommand {
    INIntent * _intent;
}

@property (nonatomic, copy) INIntent *intent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)intent;
- (id)payload;
- (void)setIntent:(id)arg1;

@end
