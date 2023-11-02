
@interface IMDSharedUtilitiesPluginPayload : NSObject {
    NSArray * _attachments;
    NSArray * _consumedSessionPayloads;
    NSData * _data;
    id  _dataDetectedResult;
    id  _datasource;
    bool  _isFromMe;
    NSString * _messageGUID;
    NSString * _pluginBundleID;
    NSURL * _url;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSArray *consumedSessionPayloads;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) id dataDetectedResult;
@property (nonatomic) id datasource;
@property (nonatomic) bool isFromMe;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic, retain) NSString *pluginBundleID;
@property (nonatomic, readonly) bool supportsCollaboration;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)attachments;
- (id)consumedSessionPayloads;
- (id)data;
- (id)dataDetectedResult;
- (id)datasource;
- (void)dealloc;
- (bool)isFromMe;
- (id)messageGUID;
- (id)pluginBundleID;
- (void)setAttachments:(id)arg1;
- (void)setConsumedSessionPayloads:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setPluginBundleID:(id)arg1;
- (void)setUrl:(id)arg1;
- (bool)supportsCollaboration;
- (id)url;

@end
