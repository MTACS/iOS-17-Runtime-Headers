
@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem {
    IMBalloonPluginDataSource * _dataSource;
}

@property (nonatomic, readonly) IMBalloonPluginDataSource *dataSource;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2 statusItemSequenceNumber:(unsigned long long)arg3;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;

@end
