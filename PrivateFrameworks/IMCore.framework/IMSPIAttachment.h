
@interface IMSPIAttachment : NSObject {
    NSDictionary * _attributionInfo;
    NSDate * _creationDate;
    long long  _fileTransferState;
    NSURL * _fileUrl;
    NSString * _guid;
    bool  _isOutgoing;
    bool  _isSticker;
    NSString * _uti;
}

@property (retain) NSDictionary *attributionInfo;
@property (readonly) NSDate *creationDate;
@property long long fileTransferState;
@property (retain) NSURL *fileUrl;
@property (retain) NSString *guid;
@property bool isOutgoing;
@property bool isSticker;
@property (retain) NSString *uti;

- (void).cxx_destruct;
- (id)attributionInfo;
- (id)bundleID;
- (id)creationDate;
- (id)description;
- (long long)fileTransferState;
- (id)fileUrl;
- (id)guid;
- (id)initWithGuid:(id)arg1 fileUrl:(id)arg2 transferState:(long long)arg3 uti:(id)arg4 isSticker:(bool)arg5 isOutgoing:(bool)arg6 attributionInfo:(id)arg7 creationDate:(id)arg8;
- (bool)isOutgoing;
- (bool)isSticker;
- (void)setAttributionInfo:(id)arg1;
- (void)setFileTransferState:(long long)arg1;
- (void)setFileUrl:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsOutgoing:(bool)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setUti:(id)arg1;
- (id)uti;

@end
