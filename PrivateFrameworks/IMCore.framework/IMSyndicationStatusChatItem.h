
@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem {
    NSString * _swyAppName;
    NSString * _swyBundleID;
    long long  _syndicationStatus;
    bool  _wasDetectedAsSWYSpam;
}

@property (nonatomic, readonly, copy) NSString *swyAppName;
@property (nonatomic, readonly, copy) NSString *swyBundleID;
@property (nonatomic, readonly) long long syndicationStatus;
@property (nonatomic, readonly) bool wasDetectedAsSWYSpam;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 withSyndicationStatus:(long long)arg2 statusItemSequenceNumber:(unsigned long long)arg3;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)swyAppName;
- (id)swyBundleID;
- (long long)syndicationStatus;
- (bool)wasDetectedAsSWYSpam;

@end
