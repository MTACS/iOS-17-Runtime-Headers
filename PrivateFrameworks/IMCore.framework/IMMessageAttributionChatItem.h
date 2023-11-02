
@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {
    NSDictionary * _attributionInfo;
    long long  _attributionType;
    bool  _showsLearnMoreLink;
}

@property (nonatomic, readonly, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly) long long attributionType;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) bool showsLearnMoreLink;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(bool)arg4 statusItemSequenceNumber:(unsigned long long)arg5;
- (id)attributionInfo;
- (long long)attributionType;
- (id)bundleID;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)showsLearnMoreLink;

@end
