
@interface IMMessageEffectControlChatItem : IMMessageStatusChatItem {
    NSString * _effectStyleID;
}

@property (nonatomic, readonly, copy) NSString *effectStyleID;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 effectStyleID:(id)arg2 statusItemSequenceNumber:(unsigned long long)arg3;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectStyleID;

@end
