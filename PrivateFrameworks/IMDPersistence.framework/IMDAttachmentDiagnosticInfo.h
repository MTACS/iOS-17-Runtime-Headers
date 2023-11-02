
@interface IMDAttachmentDiagnosticInfo : NSObject {
    long long  _ck_sync_state;
    NSString * _filePath;
    NSString * _guid;
    unsigned long long  _hide_attachment;
    unsigned long long  _is_sticker;
    NSString * _mime_type;
    NSString * _originalGUID;
    NSString * _plugin_identifier;
    unsigned long long  _total_bytes;
    long long  _transfer_state;
    NSString * _uti;
}

@property (nonatomic) long long ck_sync_state;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) unsigned long long hide_attachment;
@property (nonatomic) unsigned long long is_sticker;
@property (nonatomic, retain) NSString *mime_type;
@property (nonatomic, retain) NSString *originalGUID;
@property (nonatomic, retain) NSString *plugin_identifier;
@property (nonatomic) unsigned long long total_bytes;
@property (nonatomic) long long transfer_state;
@property (nonatomic, retain) NSString *uti;

- (void).cxx_destruct;
- (long long)ck_sync_state;
- (id)description;
- (id)filePath;
- (id)guid;
- (unsigned long long)hide_attachment;
- (unsigned long long)is_sticker;
- (id)mime_type;
- (id)originalGUID;
- (id)plugin_identifier;
- (void)setCk_sync_state:(long long)arg1;
- (void)setFilePath:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHide_attachment:(unsigned long long)arg1;
- (void)setIs_sticker:(unsigned long long)arg1;
- (void)setMime_type:(id)arg1;
- (void)setOriginalGUID:(id)arg1;
- (void)setPlugin_identifier:(id)arg1;
- (void)setTotal_bytes:(unsigned long long)arg1;
- (void)setTransfer_state:(long long)arg1;
- (void)setUti:(id)arg1;
- (unsigned long long)total_bytes;
- (long long)transfer_state;
- (id)uti;

@end
